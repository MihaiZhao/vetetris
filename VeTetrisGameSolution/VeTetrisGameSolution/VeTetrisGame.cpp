#include "VeTetrisGame.h"



VeTetrisGame::VeTetrisGame(Board *pBoard, Piece *pPiece)
{

	m_board = pBoard;
	m_piece[7] = pPiece;
	
	m_board->render();
}


VeTetrisGame::~VeTetrisGame()
{
}

void VeTetrisGame::loop(const float deltaTime)
{
	


}

void VeTetrisGame::loadPices()
{
	m_piece[SquarePiece]->load("");
	m_piece[IPiece]->load("");
	m_piece[LPiece]->load("");
	m_piece[LMirroredPiece]->load("");
	m_piece[NPiece]->load("");
	m_piece[NMirroredPiece]->load("");
	m_piece[TPiece]->load("");







}
