#ifndef PIECE_H
#define PIECE_H

#include "GameObject.h"
#include "Tile.h"

#include <string>

const int k_pieceSize = 5;	// Piece 2D size

class Piece :
	public GameObject		// Piece is a Game Object
{
private:
	Tile m_pieceData[k_pieceSize][k_pieceSize];		// 2D Array of 5 by 5 Tiles

public:
	Piece();		// Constructor
	~Piece();		// Destructor

	// Game Object functions
	virtual void update(float deltaTime);
	virtual void render();

	// Piece functions
	void load(std::string fileName);
	int getData(int row, int column) { return m_pieceData[row][column].getCell(); }
};

#endif
