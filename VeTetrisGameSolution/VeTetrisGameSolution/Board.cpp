#include "Board.h"

#include <iostream>



Board::Board()
{
	loadPices();
	initBoard();
	m_currentPiece = TPiece;

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

void Board::storePiece(int x_pos, int y_pos)
{

}

void Board::drawPieceOnBoard(int pRow, int pColumn)
{


	for ( int row = pRow, row1 = 0 ; row < k_pieceSize, row1 < 5 ; row++, row1++)
	{
		for (int column = pColumn, column1 = 0; column < 25, column1 < 5 ; column++, column1++)
		{
			if (m_Piece[m_currentPiece].getData(column1, row1) == 1)
			{
				setCellOnField(row,column , CELL_PIECE);
				currentPieceXY[row][column].setXYPos((float)row, (float)column);

			}

			if (m_Piece[m_currentPiece].getData(column1, row1) == 0)
			{
				setCellOnField(row, column, CELL_EMPTY);
				currentPieceXY[row][column].setXYPos((float)row, (float)column);

			}
		}
	}
}


void Board::loadPices()
{
	m_Piece[SquarePiece].load(SquarePieceLocation);		// For location check VeTetrisGame.h Line:9
	m_Piece[IPiece].load(IPieceLocation);			// For location check VeTetrisGame.h Line:9
	m_Piece[LPiece].load(LPieceLocation);			// For location check VeTetrisGame.h Line:9
	m_Piece[LMirroredPiece].load(LMirroredPieceLocation);	// For location check VeTetrisGame.h Line:9
	m_Piece[NPiece].load(NPieceLocation);			// For location check VeTetrisGame.h Line:9
	m_Piece[NMirroredPiece].load(NMirroredPieceLocation);	// For location check VeTetrisGame.h Line:9
	m_Piece[TPiece].load(TPieceLocation);			// For location check VeTetrisGame.h Line:9
}