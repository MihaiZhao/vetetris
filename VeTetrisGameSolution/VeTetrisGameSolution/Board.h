#ifndef BOARD_H
#define BOARD_H

#include "GameObject.h"
#include "Tile.h"
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

class Board :
	public GameObject
{
private: 
	static const int k_fieldRows = 30;
	static const int k_fieldColumns = 40;

	Tile playField[k_fieldRows][k_fieldColumns];

	Tile currentPieceXY[k_pieceSize][k_pieceSize];

	const int m_borderLeft = 0;
	const int m_borderRight = getFieldColumns() - 1;
	const int m_borderBottom = getFieldRows() - 1;

	enum CELLS { CELL_EMPTY, CELL_BOARD, CELL_PIECE};

	enum Pieces { SquarePiece, IPiece, LPiece, LMirroredPiece, NPiece, NMirroredPiece, TPiece };


	Piece m_Piece[7];

	int m_currentPiece;


public:
	Board();
	~Board();

	virtual void update(float deltaTime);
	virtual void render();

	void initBoard();

	void loadPices();


	int getBorderLeft() const { return m_borderLeft; }
	int getBorderRight() const { return m_borderRight; }
	int getBorderBottom() const { return m_borderBottom; }

	int getFieldRows() const { return k_fieldRows; }
	int getFieldColumns() const { return k_fieldColumns; }

	void setCellOnField(int x_pos, int y_pos, int value) { playField[x_pos][y_pos].setCell(value); }

	void storePiece(int x_pos, int y_pos);

	int getCurrentPiece() { return m_currentPiece; }
	void setCurrentPiece(int currPiece) { m_currentPiece = currPiece; }

	void drawPieceOnBoard(int pRow, int pColumn) ;
	

};

#endif
