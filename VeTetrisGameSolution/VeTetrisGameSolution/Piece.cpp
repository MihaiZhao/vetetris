#include "Piece.h"

#include <iostream>
#include <fstream>

Piece::Piece()
{
}


Piece::~Piece()
{
}

void Piece::update(float deltaTime)
{

}

void Piece::render()
{

}

// -------------------------------------------------------------------------------
// Name: load()
// Purpose: Loads piece from a specific data file
// -------------------------------------------------------------------------------
void Piece::load(std::string fileName)
{
	// Stream in
	std::ifstream pieceFile;						

	// Open the file
	pieceFile.open(fileName, std::fstream::in);		

	// If the file is unable to open print a warning
	if (!pieceFile.is_open()) { std::cerr << "! WARNING: Unable to open FILE:" << fileName  << "\nPlease restart the game.\n"; system("pause"); exit(1); }

	// Read data and save it to pieceData 2D array
	for (int X_pos = 0; X_pos < k_pieceSize; X_pos++)
	{
		for (int Y_pos = 0; Y_pos < k_pieceSize; Y_pos++)
		{
			int data;
			pieceFile >> data;
			m_pieceData[Y_pos][X_pos].setCell( data );
		}
	}

	// Close the file
	pieceFile.close();

#ifdef _DEBUG // only on debug mode
	std::cout << "Debug -> Load completed from file: " << fileName << "\n";
#else
#endif

}