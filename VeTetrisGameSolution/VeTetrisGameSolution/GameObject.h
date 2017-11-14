#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
private:

public:
	// You can override these
	virtual void update(float deltaTime) {};
	virtual void render() {};
};

#endif // End of '#ifndef GAMEOBJECT_H'
