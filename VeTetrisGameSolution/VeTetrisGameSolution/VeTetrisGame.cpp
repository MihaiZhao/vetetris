#include "VeTetrisGame.h"
#include "windows.h"

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


VeTetrisGame::VeTetrisGame() // Constructor initialize game
{
	initGame();
}


VeTetrisGame::~VeTetrisGame() // Destructor - Destroy OBJECT
{
}

void VeTetrisGame::loop(const float deltaTime)
{
	m_board.render();

	checkColisionDown();
	m_board.storeCurrentPiece();

	Sleep(1000);

	if (GetAsyncKeyState(VK_LEFT)) { if (checkColisionLeft() == false) { setCurrentXPOS(getCurrentXPOS() - 1); } }

	if (GetAsyncKeyState(VK_RIGHT)) { if (checkColisionRight()==false) { setCurrentXPOS(getCurrentXPOS() + 1); } }
	


	thickDown();



	m_board.drawPieceOnBoard(getCurrentYPOS(), getCurrentXPOS());

	system("cls");

}

// -------------------------------------------------------------------------------
// Name: initGame()
// Purpose: Initilises the game settings
// -------------------------------------------------------------------------------
void VeTetrisGame::initGame()
{
	srand((unsigned int)time(NULL));

	currPiece = SquarePiece;

	m_board.setCurrentPiece(currPiece);

	currentXPOS = 20;
	currentYPOS = 0;
	m_board.drawPieceOnBoard(getCurrentYPOS(), getCurrentXPOS());
}

// -------------------------------------------------------------------------------
// Name: load()
// Purpose: Loads piece from a specific data file
// -------------------------------------------------------------------------------
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

// -------------------------------------------------------------------------------
// Name: checkColisionRight()
// Purpose: Checks if the piece does not colide with the border from right
// -------------------------------------------------------------------------------
bool VeTetrisGame::checkColisionRight()
{
	if (getCurrentXPOS() > k_maxRightColision) return true;
	else return false;
}

// -------------------------------------------------------------------------------
// Name: checkColisionLeft()
// Purpose: Checks if the piece does colide with the border from left
// -------------------------------------------------------------------------------
bool VeTetrisGame::checkColisionLeft()
{
	if (getCurrentXPOS() < k_maxLeftColision) return true;
	else return false;


}

// -------------------------------------------------------------------------------
// Name: thickDown()
// Purpose: Gives a thick down
// -------------------------------------------------------------------------------
void VeTetrisGame::thickDown()
{
	setCurrentYPOS(getCurrentYPOS() + 1);
}

// -------------------------------------------------------------------------------
// Name: checkColisionDown()
// Purpose: Checks if the piece has been fell down
// -------------------------------------------------------------------------------
void VeTetrisGame::checkColisionDown()
{
	if (getCurrentYPOS() > 23)
	{
		currentXPOS = 20;
		currentYPOS = 0;


		getNewPiece();
	}
}

// -------------------------------------------------------------------------------
// Name: getRandomPiece()
// Purpose: Gets a random number between 0 and 6
// -------------------------------------------------------------------------------
int VeTetrisGame::getRandomPiece()
{

	return rand() % 7;
}

// -------------------------------------------------------------------------------
// Name: getNewPiece()
// Purpose: Sets directly a new random piece
// -------------------------------------------------------------------------------
void VeTetrisGame::getNewPiece()
{

	setCurrPiece(getRandomPiece());
}