#ifndef GAME_H
#define GAME_H


class Game
{
private:

public:
	void run();

	// Derived classes MUST implement this (pure virtual function)
	virtual void loop(const float deltaTime) {};
};



#endif // End of '#ifndef GAME_H'
