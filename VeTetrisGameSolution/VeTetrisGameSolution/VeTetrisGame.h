#ifndef VETETRISGAME_H
#define VETETRISGAME_H

#include "Game.h"
#include "Board.h"
#include "Piece.h"

class VeTetrisGame :
	public Game
{
private:
	Piece *m_piece;
	Board *m_board;


public:
	VeTetrisGame(Board *pBoard, Piece *pPiece);
	~VeTetrisGame();

	virtual void loop(const float deltaTime) override;

};

#endif

