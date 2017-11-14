#ifndef TILE_H
#define TILE_H

#include	"GameObject.h"
#include	"Vector2.h"


class Tile :
	public GameObject
{
private:
	Vector2 m_pos;
	int m_value;


public:
	Tile();
	~Tile();

	virtual void update(float deltaTime);
	virtual void render();

	void setXYPos(float x_pos, float y_pos) { m_pos.x = x_pos; m_pos.y = y_pos; }
	void setXPos(float x_pos)				{ m_pos.x = x_pos; }
	void setYPos(float y_pos)				{ m_pos.y = y_pos; }

	float getXPos() const					{ return m_pos.x; }
	float getYPos() const					{ return m_pos.y; }

	void setCell(int v)					{ m_value = v; }

	int getCell()						{ return m_value; }
};

#endif
