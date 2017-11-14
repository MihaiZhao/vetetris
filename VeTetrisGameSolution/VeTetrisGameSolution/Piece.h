#ifndef PIECE_H
#define PIECE_H

#include "GameObject.h"
#include "Tile.h"

#include <string>

const int k_pieceSize = 5;

class Piece :
	public GameObject
{
private:
	Tile m_pieceData[k_pieceSize][k_pieceSize];

public:
	Piece();
	~Piece();

	// Game Object functions
	virtual void update(float deltaTime);
	virtual void render();

	// Piece functions

	void load(std::string fileName);
	Tile& getData(int row, int column) { return m_pieceData[row][column]; }
};

#endif
