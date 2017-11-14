#include "Board.h"

#include <iostream>



Board::Board(Piece *pPiece)
{
	m_Piece = pPiece;
	initBoard();

}


Board::~Board()
{
}

void Board::update(float deltaTime)
{

}

void Board::render()
{
	for (int row = 0; row < k_fieldRows; row++)
	{
		for (int column = 0; column < k_fieldColumns; column++)
		{
			if (playField[row][column].getCell() == CELL_EMPTY) std::cout << " ";
			if (playField[row][column].getCell() == CELL_BOARD) std::cout << "#";
			if (playField[row][column].getCell() == CELL_PIECE) std::cout << "X";

		}
		std::cout << "\n";
	}
}

void Board::initBoard()
{
	for (int row = 0; row < getFieldRows(); row++)
	{
		for (int column = 0; column < getFieldColumns(); column++)
		{
			if (column == getBorderRight()) setCellOnField(row, column, CELL_BOARD);
			if (column == getBorderLeft()) setCellOnField(row, column, CELL_BOARD);
			if (column != getBorderRight() && column != getBorderLeft() ) setCellOnField(row, column, CELL_EMPTY);
			if (row == getBorderBottom() ) setCellOnField(row, column, CELL_BOARD);


		}
	}
}

void Board::storePiece(int x_pos, int y_pos, Piece *currPiece)
{
	for ( int row1 = x_pos, row2 = 0; row1 < x_pos + k_pieceSize; row1++, row2++)
	{
		for ( int column1 = y_pos, column2 = 0 ; column1 < y_pos + k_pieceSize; column1++, column2++)
		{
		}
	}
}
