#ifndef VETETRISGAME_H
#define VETETRISGAME_H

#include "Game.h"
#include "Board.h"
#include "Piece.h"

#define SquarePieceLocation		""
#define IPieceLocation			""
#define LPieceLocation			""
#define LMirroredPieceLocation	""
#define NPieceLocation			""
#define NMirroredPieceLocation	""
#define TPieceLocation			""

class VeTetrisGame :
	public Game
{
private:
	Piece *m_piece[7];
	Board *m_board;

	enum Pieces { SquarePiece, IPiece, LPiece, LMirroredPiece, NPiece,NMirroredPiece, TPiece};

public:
	VeTetrisGame(Board *pBoard, Piece *pPiece);
	~VeTetrisGame();

	virtual void loop(const float deltaTime) override;

	void loadPices();

};

#endif

