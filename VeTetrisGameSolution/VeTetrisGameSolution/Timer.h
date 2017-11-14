#ifndef TIMER_H
#define TIMER_H

#include <chrono>

typedef std::chrono::high_resolution_clock::time_point TimePoint;

class Timer
{
private:
	// The high-resolution clock
	std::chrono::high_resolution_clock m_clock;

	// The starting time 
	TimePoint m_startTime;

public:
	Timer();

	void  start();				// For starting the timer
	float getElapsedSeconds();	// gets total time passed since start() was called
};



#endif // End of '#ifndef TIMER_H'


