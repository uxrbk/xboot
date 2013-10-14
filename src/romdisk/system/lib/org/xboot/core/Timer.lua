---
-- The 'Timer' class is used to execute a code at specified intervals.
-- 
-- @module Timer
local M = Class()

---
-- Creates a new 'Timer' object with the specified delay and iteration.
-- 
-- @function [parent=#Timer] new
-- @param delay (number) The delay in seconds
-- @param iteration (number) The number of times listener is to be invoked. pass 0 if you want it to loop forever.
-- @param listener (function) The listener to invoke after the delay.
-- @param data (optional) An optional data parameter that is passed to the listener function.
-- @return New 'Timer' object.
function M:init(delay, iteration, listener, data)
	self.delay = delay or 1
	self.iteration = iteration or 1
	self.listener = listener
	self.data = data or nil

	self.time = 0
	self.count = 0
	self.running = true
end

---
-- Returns the current running status of timer.
-- 
-- @function [parent=#Timer] isRunning
-- @param self
-- @return 'true' if the timer is running, 'false' otherwise.
function M:isRunning()
	return self.running
end

---
-- Resumes the timer that was paused.
--
-- @function [parent=#Timer] resume
-- @param self
function M:resume()
	self.running = true
end

---
-- Pauses the timer that was running.
--
-- @function [parent=#Timer] pause
-- @param self
function M:pause()
	self.running = false
end

return M
