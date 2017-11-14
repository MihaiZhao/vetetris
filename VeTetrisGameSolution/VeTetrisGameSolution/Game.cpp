
#include "Game.h"
#include "Timer.h"

void Game::run()
{
	const float k_frameRate = 60.0f;				// Number of times-per-second to try and run game
	const float k_frameRateTime = 1.0f / k_frameRate;	// Time-per-frame

														// Instantiate a Timer
	Timer timer;

	// Useful vars for managing frame-rate
	float lastTime = timer.getElapsedSeconds();
	float currentTime;
	float timeAccumulator = 0.0f;

	while (true)
	{
		currentTime = timer.getElapsedSeconds();
		float timePassed = currentTime - lastTime;
		lastTime = currentTime;

		timeAccumulator += timePassed;

		if (timeAccumulator > k_frameRateTime)
		{
			// Consume 1 frame's worth of time
			timeAccumulator -= k_frameRateTime;

			// Enough time has passed so perform one cycle
			loop(k_frameRateTime);
		}

	}
}

