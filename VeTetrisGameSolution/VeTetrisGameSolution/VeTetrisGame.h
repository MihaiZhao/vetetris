#ifndef VETETRISGAME_H
#define VETETRISGAME_H

#include "Game.h"
#include "Board.h"
#include "Piece.h"

//-----------------------------------
// Set location for each piece
//------------------------------------
#define SquarePieceLocation		"Pieces\\Square-Piece\\SquarePiece.data"
#define IPieceLocation			"Pieces\\I-Piece\\IPiece.data"
#define LPieceLocation			"Pieces\\L-Piece\\LPiece.data"
#define LMirroredPieceLocation	"Pieces\\L-Mirrored-Piece\\LMirroredPiece.data"
#define NPieceLocation			"Pieces\\N-Piece\\NPiece.data"
#define NMirroredPieceLocation	"Pieces\\N-Mirrored-Piece\\NMirroredPiece.data"
#define TPieceLocation			"Pieces\\T-Piece\\TPiece.data"

class VeTetrisGame :
	public Game
{
private:
	Piece m_piece[7];
	Board m_board;

	int currentXPOS;
	int currentYPOS;

	enum Pieces { SquarePiece, IPiece, LPiece, LMirroredPiece, NPiece,NMirroredPiece, TPiece};

	Pieces currPiece;

public:
	VeTetrisGame();
	~VeTetrisGame();

	virtual void loop(const float deltaTime) override;

	void loadPices();

	int getCurrentXPOS() { return currentXPOS; }
	void setCurrentXPOS(int x_pos) { currentXPOS = x_pos; }

	int getCurrentYPOS() { return currentYPOS; }
	void setCurrentYPOS(int y_pos) { currentYPOS = y_pos; }

};

#endif

