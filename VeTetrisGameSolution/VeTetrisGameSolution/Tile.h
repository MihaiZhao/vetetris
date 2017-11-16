#ifndef TILE_H
#define TILE_H

#include	"GameObject.h"
#include	"Vector2.h"


class Tile :
	public GameObject	// Tile is a Game Object
{
private:
	Vector2 m_pos;		// Position x and y
	int m_value;		// Value of current tile


public:
	Tile();		// Constructor
	~Tile();	// Destructor

	virtual void update(float deltaTime);
	virtual void render();

	// Setters for XY
	void setXYPos(float x_pos, float y_pos) { m_pos.x = x_pos; m_pos.y = y_pos; }
	void setXPos(float x_pos)				{ m_pos.x = x_pos; }
	void setYPos(float y_pos)				{ m_pos.y = y_pos; }

	// Getters for XY
	float getXPos() const					{ return m_pos.x; }
	float getYPos() const					{ return m_pos.y; }

	// Setters for cells
	void setCell(int v)					{ m_value = v; }

	// Getters for cells
	int getCell()						{ return m_value; }
};

#endif
