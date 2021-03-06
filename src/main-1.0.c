// Submarine game
//author: github/return5
//license: GPL 2.0
//version: 1.0
//currently a work in progress.
//turned based game. player controls a submarine and is in a fight against enemy submarines,enemy destroyers and also a cargo ship 


//---------------------------------------- headers ------------------------------------------------
#include <stdlib.h>
#include <ncurses.h>
#include "main.h"
#include "macros.h"
#include "units.h"
#include "makeWin.h"
#include "playerturn.h"
#include "setOpts.h"
#include "computerturn.h"
#include "printStuff.h"
#include "createPieces.h"

//----------------------------------------  global vars -------------------------------------------
SHIP *player_sub; //player controlled submarine
ENEMIES *enemies; //head of linked list which holds enemy ships
int play = 1;
//
//---------------------------------------- prototypes ----------------------------------------------
static void gameLoop(void);
static void exitGame(void);

//---------------------------------------- code ---------------------------------------------------

static void gameLoop(void) {
	while(play == 1) {
		playerTurn();  //playerturn.c
		computerTurn(); //computerturn.c
	}
}

//when the game is over.
static void exitGame(void) {
	endwin();
}

int main(void) {	
	makeWin();         //makewin.c
	createPieces();   //createPieces.c
	printOptWin();   //printstuff.c
	updateBoard();  //printstuff.c
	gameLoop();
	exitGame();
	return EXIT_SUCCESS;
}
