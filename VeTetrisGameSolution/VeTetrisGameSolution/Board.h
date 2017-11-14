#ifndef BOARD_H
#define BOARD_H

#include "GameObject.h"
#include "Tile.h"
#include "Piece.h"


class Board :
	public GameObject
{
private: 
	static const int k_fieldRows = 50;
	static const int k_fieldColumns = 40;

	Tile playField[k_fieldRows][k_fieldColumns];

	const int m_borderLeft = 0;
	const int m_borderRight = getFieldColumns() - 1;
	const int m_borderBottom = getFieldRows() - 1;

	enum CELLS { CELL_EMPTY, CELL_BOARD, CELL_PIECE};

	Piece *m_Piece;


public:
	Board(Piece *pPiece);
	~Board();

	virtual void update(float deltaTime);
	virtual void render();

	void initBoard();

	int getBorderLeft() const { return m_borderLeft; }
	int getBorderRight() const { return m_borderRight; }
	int getBorderBottom() const { return m_borderBottom; }

	int getFieldRows() const { return k_fieldRows; }
	int getFieldColumns() const { return k_fieldColumns; }

	void setCellOnField(int x_pos, int y_pos, int value) { playField[x_pos][y_pos].setCell(value); }

	void storePiece(int x_pos, int y_pos, Piece *currPiece);

};

#endif
