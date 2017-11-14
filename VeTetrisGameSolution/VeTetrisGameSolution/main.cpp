#include "VeTetrisGame.h"
#include "Piece.h"
#include "Board.h"


void main()
{
	Piece m_pieces;

	Board m_board(&m_pieces);
	VeTetrisGame game(&m_board, &m_pieces);

	game.run();
}