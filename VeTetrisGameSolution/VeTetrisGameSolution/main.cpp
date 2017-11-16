#include "VeTetrisGame.h"
#include "Piece.h"
#include "Board.h"

#include <iostream>
#include <windows.h>

#define SPACE GetAsyncKeyState(VK_SPACE)		// Space Key
#define UP GetAsyncKeyState(VK_UP)				// UP arrow key
#define DOWN GetAsyncKeyState(VK_DOWN)			// DOWN arrow key

void main()
{
	VeTetrisGame game;		// Create the Game - Object

	char menu[9][30] =
	{
		"#############################",
		"#          VeTetris         #",
		"#---------------------------#",
		"#          > Play           #",
		"#            Exit           #",
		"#---------------------------#",
		"# ARROW KEYS    SPACEBAR    #",
		"#  to move      to select   #",
		"#############################",
	};

	int x = 11; // X POS for the pointer selector from menu
	int y = 3;	// Y POS for the pointer selector from menu

	bool game_running = true;	// Variable for menu loop

	while (game_running == true) {
		system("cls");										// Clean the screen
		for (int display = 0; display < 9; display++) {
			std::cout << menu[display] << std::endl;		// Print the menu
		}


		system("pause>nul");								// Block the screen if not any key got pressed

		if (DOWN) {
			int y2 = y + 1;
			if (menu[y2][x] == ' ') {
				menu[y][x] = ' ';
				y++;
				menu[y][x] = '>';							// Move the selector down if DOWN is pressed
			}
		}

		if (UP) {
			int y2 = y - 1;
			if (menu[y2][x] == ' ') {
				menu[y][x] = ' ';
				y--;
				menu[y][x] = '>';							// Move the selector up if UP is pressed
			}
		}

		if (SPACE) {
			system("cls");
			if (y == 3 ) game.run();						// Start game if the selector is on PLAY
			if (y == 4) game_running = false;				// Quit game if the selector is on QUIT
		}

	}
	system("cls");											// CLEAR SCREEN

}

