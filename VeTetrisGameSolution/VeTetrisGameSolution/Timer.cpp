#include "Timer.h"

Timer::Timer()
{
	// Automatically call start() here for ease-of-use
	start();
}

void Timer::start()
{
	// Set start-time to current clock time
	m_startTime = m_clock.now();
}

float Timer::getElapsedSeconds()
{
	// Get current time 
	TimePoint currentTime = m_clock.now();

	std::chrono::duration<float> elapsed_seconds = currentTime - m_startTime;

	// Convert to seconds
	float elapsedSeconds = elapsed_seconds.count();
	return elapsedSeconds;
}
