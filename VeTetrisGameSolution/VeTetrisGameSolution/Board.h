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
	static const int k_fieldRows = 30;		//	ROWS
	static const int k_fieldColumns = 40;	//	COLUMNS

	Tile playField[k_fieldRows][k_fieldColumns];	// The playfield is created by 30 and 40 Tiles

	Tile currentPieceXY[k_pieceSize][k_pieceSize];	// The current piece is created by 5 and 5 Tiles

	const int m_borderLeft = 0;							// First column - LEFT BORDER
	const int m_borderRight = getFieldColumns() - 1;	// Last column - RIGHT BORDER
	const int m_borderBottom = getFieldRows() - 1;		// Last row - BOTTOM BORDER

	enum CELLS { CELL_EMPTY, CELL_BOARD, CELL_PIECE};	// 3 Different types of CELLS

	enum Pieces { SquarePiece, IPiece, LPiece, LMirroredPiece, NPiece, NMirroredPiece, TPiece }; // ALL PIECES


	Piece m_Piece[7]; // Create 7 Pieces Objects

	int m_currentPiece; // Current piece 


public:
	Board();		// Constructor
	~Board();		// Destructor

	virtual void update(float deltaTime);
	virtual void render();

	// Init Board
	void initBoard();

	// Load Pieces
	void loadPices();

	// Getters
	int getBorderLeft() const { return m_borderLeft; }
	int getBorderRight() const { return m_borderRight; }
	int getBorderBottom() const { return m_borderBottom; }
	int getFieldRows() const { return k_fieldRows; }
	int getFieldColumns() const { return k_fieldColumns; }
	int getCurrentPiece() { return m_currentPiece; }


	// Setters
	void setCellOnField(int x_pos, int y_pos, int value) { playField[x_pos][y_pos].setCell(value); }
	void setCurrentPiece(int currPiece) { m_currentPiece = currPiece; }


	// Pieces on board functions
	void drawPieceOnBoard(int pRow, int pColumn) ;
	void storeCurrentPiece();

	

};

#endif
