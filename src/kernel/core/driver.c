/*
 * kernel/core/driver.c
 *
 * Copyright(c) 2007-2016 Jianjun Jiang <8192542@qq.com>
 * Official site: http://xboot.org
 * Mobile phone: +86-18665388956
 * QQ: 8192542
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <xboot/driver.h>

struct driver_list_t
{
	struct driver_t * driver;
	struct hlist_node node;
};

static struct hlist_head __driver_hash[97];
static spinlock_t __driver_lock = SPIN_LOCK_INIT();

static struct hlist_head * driver_hash(const char * name)
{
	unsigned char * p = (unsigned char *)name;
	unsigned int seed = 131;
	unsigned int hash = 0;

	while(*p)
	{
		hash = hash * seed + (*p++);
	}
	return &__driver_hash[hash % ARRAY_SIZE(__driver_hash)];
}

static struct kobj_t * search_class_driver_kobj(void)
{
	struct kobj_t * kclass = kobj_search_directory_with_create(kobj_get_root(), "class");
	return kobj_search_directory_with_create(kclass, "driver");
}

struct driver_t * search_driver(const char * name)
{
	struct driver_list_t * dl;
	struct hlist_node * pos, * n;

	if(!name)
		return NULL;

	hlist_for_each_entry_safe(dl, pos, n, driver_hash(name), node)
	{
		if(strcmp(dl->driver->name, name) == 0)
			return dl->driver;
	}
	return NULL;
}

bool_t register_driver(struct driver_t * drv)
{
	struct driver_list_t * dl;
	irq_flags_t flags;

	if(!drv || !drv->name)
		return FALSE;

	if(!drv->probe || !drv->remove)
		return FALSE;

	if(!drv->suspend || !drv->resume)
		return FALSE;

	if(search_driver(drv->name))
		return FALSE;

	dl = malloc(sizeof(struct driver_list_t));
	if(!dl)
		return FALSE;

	if(!drv->kobj)
		drv->kobj = kobj_alloc_directory(drv->name);
	kobj_add(search_class_driver_kobj(), drv->kobj);
	dl->driver = drv;

	spin_lock_irqsave(&__driver_lock, flags);
	hlist_add_head(&dl->node, driver_hash(drv->name));
	spin_unlock_irqrestore(&__driver_lock, flags);

	return TRUE;
}

bool_t unregister_driver(struct driver_t * drv)
{
	struct driver_list_t * dl;
	struct hlist_node * pos, * n;
	irq_flags_t flags;

	if(!drv || !drv->name)
		return FALSE;

	hlist_for_each_entry_safe(dl, pos, n, driver_hash(drv->name), node)
	{
		if(dl->driver == drv)
		{
			spin_lock_irqsave(&__driver_lock, flags);
			hlist_del(&dl->node);
			spin_unlock_irqrestore(&__driver_lock, flags);

			kobj_remove(search_class_driver_kobj(), dl->driver->kobj);
			free(dl);
			return TRUE;
		}
	}

	return FALSE;
}

void probe_device(const char * json, int length)
{
	struct driver_t * drv;
	struct device_t * dev;
	struct dtnode_t n;
	json_value * v;
	char * p;
	int i;

	if(json && (length > 0))
	{
		v = json_parse(json, length);
		if(v && (v->type == json_object))
		{
			for(i = 0; i < v->u.object.length; i++)
			{
				p = (char *)(v->u.object.values[i].name);
				n.name = strsep(&p, "@");
				n.addr = p ? strtoull(p, NULL, 0) : 0;
				n.value = (json_value *)(v->u.object.values[i].value);

				drv = search_driver(n.name);
				if(drv && drv->probe && (dev = drv->probe(drv, &n)))
					LOG("Probe device '%s' with %s", dev->name, drv->name);
				else
					LOG("Fail to probe device witch %s", n.name);
			}
		}
		json_value_free(v);
	}
}

static __init void driver_pure_init(void)
{
	int i;

	for(i = 0; i < ARRAY_SIZE(__driver_hash); i++)
		init_hlist_head(&__driver_hash[i]);
}
pure_initcall(driver_pure_init);