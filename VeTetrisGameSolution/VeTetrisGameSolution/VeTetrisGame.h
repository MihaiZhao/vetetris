#ifndef VETETRISGAME_H
#define VETETRISGAME_H

#include "Game.h"
#include "Board.h"
#include "Piece.h"

#include <stdio.h>  
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

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

const int k_maxRightColision = 33;  // Do not move the piece further than the border
const int k_maxLeftColision = 2;	// Do not move the piece further than the border


class VeTetrisGame :
	public Game			// Main Game
{
private:
	Piece m_piece[7];	// Create 7 Pieces
	Board m_board;		// Create a board

	int currentXPOS;	// Current piece X position
	int currentYPOS;	// Current piece Y position

	enum Pieces { SquarePiece, IPiece, LPiece, LMirroredPiece, NPiece,NMirroredPiece, TPiece};

	int currPiece;		// Current piece ( between 0 - 6 Pieces )



public:
	VeTetrisGame();		// Constructor
	~VeTetrisGame();	// Destructor

	// Loop game - main activity
	virtual void loop(const float deltaTime) override;

	// Init game
	void initGame();

	// Load the pieces from files
	void loadPices();

	// Getters
	int getCurrentXPOS() { return currentXPOS; }
	int getCurrentYPOS() { return currentYPOS; }
	int getRandomPiece();
	void getNewPiece();

	// Setters
	void setCurrentXPOS(int x_pos) { currentXPOS = x_pos; }
	void setCurrentYPOS(int y_pos) { currentYPOS = y_pos; }
	void setCurrPiece(int currP) { currPiece = currP; }


	// Check Collision
	bool checkColisionRight();
	bool checkColisionLeft();
	void checkColisionDown();
	void thickDown();

	// Reseter
	void resetPos() { currentXPOS = 20; currentYPOS = 0; }





};

#endif

