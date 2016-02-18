#ifndef __S5P4418_IRQ_H__
#define __S5P4418_IRQ_H__

#ifdef __cplusplus
extern "C" {
#endif

#define S5P4418_SUBIRQ_GPIOA	(32 + 21)
#define S5P4418_SUBIRQ_GPIOB	(32 + 22)
#define S5P4418_SUBIRQ_GPIOC	(32 + 23)
#define S5P4418_SUBIRQ_GPIOD	(32 + 24)
#define S5P4418_SUBIRQ_GPIOE	(32 + 25)
#define S5P4418_SUBIRQ_GPIOALV	(0 + 4)

#define S5P4418_IRQ_MCUSTOP		(0 + 0)
#define S5P4418_IRQ_DMA0		(0 + 1)
#define S5P4418_IRQ_DMA1		(0 + 2)
#define S5P4418_IRQ_CLKPWR0		(0 + 3)
#define S5P4418_IRQ_CLKPWR2		(0 + 5)
#define S5P4418_IRQ_UART1		(0 + 6)
#define S5P4418_IRQ_UART0		(0 + 7)
#define S5P4418_IRQ_UART2		(0 + 8)
#define S5P4418_IRQ_UART3		(0 + 9)
#define S5P4418_IRQ_UART4		(0 + 10)
#define S5P4418_IRQ_SSP0		(0 + 12)
#define S5P4418_IRQ_SSP1		(0 + 13)
#define S5P4418_IRQ_SSP2		(0 + 14)
#define S5P4418_IRQ_I2C0		(0 + 15)
#define S5P4418_IRQ_I2C1		(0 + 16)
#define S5P4418_IRQ_I2C2		(0 + 17)
#define S5P4418_IRQ_DEINTERLACE	(0 + 18)
#define S5P4418_IRQ_SCALER		(0 + 19)
#define S5P4418_IRQ_AC97		(0 + 20)
#define S5P4418_IRQ_SPDIFRX		(0 + 21)
#define S5P4418_IRQ_SPDIFTX		(0 + 22)
#define S5P4418_IRQ_TIMER0		(0 + 23)
#define S5P4418_IRQ_TIMER1		(0 + 24)
#define S5P4418_IRQ_TIMER2		(0 + 25)
#define S5P4418_IRQ_TIMER3		(0 + 26)
#define S5P4418_IRQ_PWM0		(0 + 27)
#define S5P4418_IRQ_PWM1		(0 + 28)
#define S5P4418_IRQ_PWM2		(0 + 29)
#define S5P4418_IRQ_PWM3		(0 + 30)
#define S5P4418_IRQ_WDT			(0 + 31)

#define S5P4418_IRQ_MPEGTSI		(32 + 0)
#define S5P4418_IRQ_DISPLAYTOP0	(32 + 1)
#define S5P4418_IRQ_DISPLAYTOP1	(32 + 2)
#define S5P4418_IRQ_DISPLAYTOP2	(32 + 3)
#define S5P4418_IRQ_DISPLAYTOP3	(32 + 4)
#define S5P4418_IRQ_VIP0		(32 + 5)
#define S5P4418_IRQ_VIP1		(32 + 6)
#define S5P4418_IRQ_MIPI		(32 + 7)
#define S5P4418_IRQ_3DGPU		(32 + 8)
#define S5P4418_IRQ_ADC			(32 + 9)
#define S5P4418_IRQ_PPM			(32 + 10)
#define S5P4418_IRQ_SDMMC0		(32 + 11)
#define S5P4418_IRQ_SDMMC1		(32 + 12)
#define S5P4418_IRQ_SDMMC2		(32 + 13)
#define S5P4418_IRQ_CODA9600	(32 + 14)
#define S5P4418_IRQ_CODA9601	(32 + 15)
#define S5P4418_IRQ_GMAC		(32 + 16)
#define S5P4418_IRQ_USB20OTG	(32 + 17)
#define S5P4418_IRQ_USB20HOST	(32 + 18)
#define S5P4418_IRQ_CRYPTO		(32 + 26)
#define S5P4418_IRQ_PDM			(32 + 27)

#define S5P4418_IRQ_GPIOA0		(64 + 0)
#define S5P4418_IRQ_GPIOA1		(64 + 1)
#define S5P4418_IRQ_GPIOA2		(64 + 2)
#define S5P4418_IRQ_GPIOA3		(64 + 3)
#define S5P4418_IRQ_GPIOA4		(64 + 4)
#define S5P4418_IRQ_GPIOA5		(64 + 5)
#define S5P4418_IRQ_GPIOA6		(64 + 6)
#define S5P4418_IRQ_GPIOA7		(64 + 7)
#define S5P4418_IRQ_GPIOA8		(64 + 8)
#define S5P4418_IRQ_GPIOA9		(64 + 9)
#define S5P4418_IRQ_GPIOA10		(64 + 10)
#define S5P4418_IRQ_GPIOA11		(64 + 11)
#define S5P4418_IRQ_GPIOA12		(64 + 12)
#define S5P4418_IRQ_GPIOA13		(64 + 13)
#define S5P4418_IRQ_GPIOA14		(64 + 14)
#define S5P4418_IRQ_GPIOA15		(64 + 15)
#define S5P4418_IRQ_GPIOA16		(64 + 16)
#define S5P4418_IRQ_GPIOA17		(64 + 17)
#define S5P4418_IRQ_GPIOA18		(64 + 18)
#define S5P4418_IRQ_GPIOA19		(64 + 19)
#define S5P4418_IRQ_GPIOA20		(64 + 20)
#define S5P4418_IRQ_GPIOA21		(64 + 21)
#define S5P4418_IRQ_GPIOA22		(64 + 22)
#define S5P4418_IRQ_GPIOA23		(64 + 23)
#define S5P4418_IRQ_GPIOA24		(64 + 24)
#define S5P4418_IRQ_GPIOA25		(64 + 25)
#define S5P4418_IRQ_GPIOA26		(64 + 26)
#define S5P4418_IRQ_GPIOA27		(64 + 27)
#define S5P4418_IRQ_GPIOA28		(64 + 28)
#define S5P4418_IRQ_GPIOA29		(64 + 29)
#define S5P4418_IRQ_GPIOA30		(64 + 30)
#define S5P4418_IRQ_GPIOA31		(64 + 31)

#define S5P4418_IRQ_GPIOB0		(96 + 0)
#define S5P4418_IRQ_GPIOB1		(96 + 1)
#define S5P4418_IRQ_GPIOB2		(96 + 2)
#define S5P4418_IRQ_GPIOB3		(96 + 3)
#define S5P4418_IRQ_GPIOB4		(96 + 4)
#define S5P4418_IRQ_GPIOB5		(96 + 5)
#define S5P4418_IRQ_GPIOB6		(96 + 6)
#define S5P4418_IRQ_GPIOB7		(96 + 7)
#define S5P4418_IRQ_GPIOB8		(96 + 8)
#define S5P4418_IRQ_GPIOB9		(96 + 9)
#define S5P4418_IRQ_GPIOB10		(96 + 10)
#define S5P4418_IRQ_GPIOB11		(96 + 11)
#define S5P4418_IRQ_GPIOB12		(96 + 12)
#define S5P4418_IRQ_GPIOB13		(96 + 13)
#define S5P4418_IRQ_GPIOB14		(96 + 14)
#define S5P4418_IRQ_GPIOB15		(96 + 15)
#define S5P4418_IRQ_GPIOB16		(96 + 16)
#define S5P4418_IRQ_GPIOB17		(96 + 17)
#define S5P4418_IRQ_GPIOB18		(96 + 18)
#define S5P4418_IRQ_GPIOB19		(96 + 19)
#define S5P4418_IRQ_GPIOB20		(96 + 20)
#define S5P4418_IRQ_GPIOB21		(96 + 21)
#define S5P4418_IRQ_GPIOB22		(96 + 22)
#define S5P4418_IRQ_GPIOB23		(96 + 23)
#define S5P4418_IRQ_GPIOB24		(96 + 24)
#define S5P4418_IRQ_GPIOB25		(96 + 25)
#define S5P4418_IRQ_GPIOB26		(96 + 26)
#define S5P4418_IRQ_GPIOB27		(96 + 27)
#define S5P4418_IRQ_GPIOB28		(96 + 28)
#define S5P4418_IRQ_GPIOB29		(96 + 29)
#define S5P4418_IRQ_GPIOB30		(96 + 30)
#define S5P4418_IRQ_GPIOB31		(96 + 31)

#define S5P4418_IRQ_GPIOC0		(128 + 0)
#define S5P4418_IRQ_GPIOC1		(128 + 1)
#define S5P4418_IRQ_GPIOC2		(128 + 2)
#define S5P4418_IRQ_GPIOC3		(128 + 3)
#define S5P4418_IRQ_GPIOC4		(128 + 4)
#define S5P4418_IRQ_GPIOC5		(128 + 5)
#define S5P4418_IRQ_GPIOC6		(128 + 6)
#define S5P4418_IRQ_GPIOC7		(128 + 7)
#define S5P4418_IRQ_GPIOC8		(128 + 8)
#define S5P4418_IRQ_GPIOC9		(128 + 9)
#define S5P4418_IRQ_GPIOC10		(128 + 10)
#define S5P4418_IRQ_GPIOC11		(128 + 11)
#define S5P4418_IRQ_GPIOC12		(128 + 12)
#define S5P4418_IRQ_GPIOC13		(128 + 13)
#define S5P4418_IRQ_GPIOC14		(128 + 14)
#define S5P4418_IRQ_GPIOC15		(128 + 15)
#define S5P4418_IRQ_GPIOC16		(128 + 16)
#define S5P4418_IRQ_GPIOC17		(128 + 17)
#define S5P4418_IRQ_GPIOC18		(128 + 18)
#define S5P4418_IRQ_GPIOC19		(128 + 19)
#define S5P4418_IRQ_GPIOC20		(128 + 20)
#define S5P4418_IRQ_GPIOC21		(128 + 21)
#define S5P4418_IRQ_GPIOC22		(128 + 22)
#define S5P4418_IRQ_GPIOC23		(128 + 23)
#define S5P4418_IRQ_GPIOC24		(128 + 24)
#define S5P4418_IRQ_GPIOC25		(128 + 25)
#define S5P4418_IRQ_GPIOC26		(128 + 26)
#define S5P4418_IRQ_GPIOC27		(128 + 27)
#define S5P4418_IRQ_GPIOC28		(128 + 28)
#define S5P4418_IRQ_GPIOC29		(128 + 29)
#define S5P4418_IRQ_GPIOC30		(128 + 30)
#define S5P4418_IRQ_GPIOC31		(128 + 31)

#define S5P4418_IRQ_GPIOD0		(160 + 0)
#define S5P4418_IRQ_GPIOD1		(160 + 1)
#define S5P4418_IRQ_GPIOD2		(160 + 2)
#define S5P4418_IRQ_GPIOD3		(160 + 3)
#define S5P4418_IRQ_GPIOD4		(160 + 4)
#define S5P4418_IRQ_GPIOD5		(160 + 5)
#define S5P4418_IRQ_GPIOD6		(160 + 6)
#define S5P4418_IRQ_GPIOD7		(160 + 7)
#define S5P4418_IRQ_GPIOD8		(160 + 8)
#define S5P4418_IRQ_GPIOD9		(160 + 9)
#define S5P4418_IRQ_GPIOD10		(160 + 10)
#define S5P4418_IRQ_GPIOD11		(160 + 11)
#define S5P4418_IRQ_GPIOD12		(160 + 12)
#define S5P4418_IRQ_GPIOD13		(160 + 13)
#define S5P4418_IRQ_GPIOD14		(160 + 14)
#define S5P4418_IRQ_GPIOD15		(160 + 15)
#define S5P4418_IRQ_GPIOD16		(160 + 16)
#define S5P4418_IRQ_GPIOD17		(160 + 17)
#define S5P4418_IRQ_GPIOD18		(160 + 18)
#define S5P4418_IRQ_GPIOD19		(160 + 19)
#define S5P4418_IRQ_GPIOD20		(160 + 20)
#define S5P4418_IRQ_GPIOD21		(160 + 21)
#define S5P4418_IRQ_GPIOD22		(160 + 22)
#define S5P4418_IRQ_GPIOD23		(160 + 23)
#define S5P4418_IRQ_GPIOD24		(160 + 24)
#define S5P4418_IRQ_GPIOD25		(160 + 25)
#define S5P4418_IRQ_GPIOD26		(160 + 26)
#define S5P4418_IRQ_GPIOD27		(160 + 27)
#define S5P4418_IRQ_GPIOD28		(160 + 28)
#define S5P4418_IRQ_GPIOD29		(160 + 29)
#define S5P4418_IRQ_GPIOD30		(160 + 30)
#define S5P4418_IRQ_GPIOD31		(160 + 31)

#define S5P4418_IRQ_GPIOE0		(192 + 0)
#define S5P4418_IRQ_GPIOE1		(192 + 1)
#define S5P4418_IRQ_GPIOE2		(192 + 2)
#define S5P4418_IRQ_GPIOE3		(192 + 3)
#define S5P4418_IRQ_GPIOE4		(192 + 4)
#define S5P4418_IRQ_GPIOE5		(192 + 5)
#define S5P4418_IRQ_GPIOE6		(192 + 6)
#define S5P4418_IRQ_GPIOE7		(192 + 7)
#define S5P4418_IRQ_GPIOE8		(192 + 8)
#define S5P4418_IRQ_GPIOE9		(192 + 9)
#define S5P4418_IRQ_GPIOE10		(192 + 10)
#define S5P4418_IRQ_GPIOE11		(192 + 11)
#define S5P4418_IRQ_GPIOE12		(192 + 12)
#define S5P4418_IRQ_GPIOE13		(192 + 13)
#define S5P4418_IRQ_GPIOE14		(192 + 14)
#define S5P4418_IRQ_GPIOE15		(192 + 15)
#define S5P4418_IRQ_GPIOE16		(192 + 16)
#define S5P4418_IRQ_GPIOE17		(192 + 17)
#define S5P4418_IRQ_GPIOE18		(192 + 18)
#define S5P4418_IRQ_GPIOE19		(192 + 19)
#define S5P4418_IRQ_GPIOE20		(192 + 20)
#define S5P4418_IRQ_GPIOE21		(192 + 21)
#define S5P4418_IRQ_GPIOE22		(192 + 22)
#define S5P4418_IRQ_GPIOE23		(192 + 23)
#define S5P4418_IRQ_GPIOE24		(192 + 24)
#define S5P4418_IRQ_GPIOE25		(192 + 25)
#define S5P4418_IRQ_GPIOE26		(192 + 26)
#define S5P4418_IRQ_GPIOE27		(192 + 27)
#define S5P4418_IRQ_GPIOE28		(192 + 28)
#define S5P4418_IRQ_GPIOE29		(192 + 29)
#define S5P4418_IRQ_GPIOE30		(192 + 30)
#define S5P4418_IRQ_GPIOE31		(192 + 31)

#define S5P4418_IRQ_GPIOALV0	(224 + 0)
#define S5P4418_IRQ_GPIOALV1	(224 + 1)
#define S5P4418_IRQ_GPIOALV2	(224 + 2)
#define S5P4418_IRQ_GPIOALV3	(224 + 3)
#define S5P4418_IRQ_GPIOALV4	(224 + 4)
#define S5P4418_IRQ_GPIOALV5	(224 + 5)

#ifdef __cplusplus
}
#endif

#endif /* __S5P4418_IRQ_H__ */