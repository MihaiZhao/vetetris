#include "VeTetrisGame.h"



VeTetrisGame::VeTetrisGame(Board *pBoard, Piece *pPiece)
{

	m_board = pBoard;
	m_piece = pPiece;
	
	m_board->render();
}


VeTetrisGame::~VeTetrisGame()
{
}

void VeTetrisGame::loop(const float deltaTime)
{
	


}
