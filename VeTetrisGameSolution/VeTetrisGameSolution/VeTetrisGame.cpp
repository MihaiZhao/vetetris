#include "VeTetrisGame.h"
#include "windows.h"


VeTetrisGame::VeTetrisGame()
{
	currPiece = NPiece;
	m_board.setCurrentPiece(currPiece);
	currentXPOS = 20;
	currentYPOS = 0;
	m_board.drawPieceOnBoard(getCurrentYPOS(), getCurrentXPOS());

}


VeTetrisGame::~VeTetrisGame()
{
}

void VeTetrisGame::loop(const float deltaTime)
{
	m_board.render();
	system("pause>nul");

	if (GetAsyncKeyState(VK_LEFT)) setCurrentXPOS(getCurrentXPOS() - 1 );
	if (GetAsyncKeyState(VK_RIGHT)) setCurrentXPOS(getCurrentXPOS() + 1);
	if (GetAsyncKeyState(VK_DOWN)) setCurrentYPOS(getCurrentYPOS() + 1);

	m_board.drawPieceOnBoard(getCurrentYPOS(), getCurrentXPOS());
	system("cls");

}

void VeTetrisGame::loadPices()
{
	m_piece[SquarePiece]	.load(SquarePieceLocation);		// For location check VeTetrisGame.h Line:9
	m_piece[IPiece]			.load(IPieceLocation);			// For location check VeTetrisGame.h Line:9
	m_piece[LPiece]			.load(LPieceLocation);			// For location check VeTetrisGame.h Line:9
	m_piece[LMirroredPiece]	.load(LMirroredPieceLocation);	// For location check VeTetrisGame.h Line:9
	m_piece[NPiece]			.load(NPieceLocation);			// For location check VeTetrisGame.h Line:9
	m_piece[NMirroredPiece]	.load(NMirroredPieceLocation);	// For location check VeTetrisGame.h Line:9
	m_piece[TPiece]			.load(TPieceLocation);			// For location check VeTetrisGame.h Line:9
}
