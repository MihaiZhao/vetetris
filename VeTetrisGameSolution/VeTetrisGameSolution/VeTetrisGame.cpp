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
	m_piece[SquarePiece]	->load(SquarePieceLocation);
	m_piece[IPiece]			->load(IPieceLocation);
	m_piece[LPiece]			->load(LPieceLocation);
	m_piece[LMirroredPiece]	->load(LMirroredPieceLocation);
	m_piece[NPiece]			->load(NPieceLocation);
	m_piece[NMirroredPiece]	->load(NMirroredPieceLocation);
	m_piece[TPiece]			->load(TPieceLocation);







}
