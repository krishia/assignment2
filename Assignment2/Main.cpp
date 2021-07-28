#include <cassert>
#include <fstream>
#include <iostream>
#include "Board.h"
#include "Player.h"
using namespace chess;

int main()
{

	std::ifstream inputFile("input.txt");
	Board b1;
	Board b2(inputFile);
	b1.PrintBoard(std::cout);
	b2.PrintBoard(std::cout);
	Board b3(b1);
	b3.PrintBoard(std::cout);
	b3 = b2;
	b3.PrintBoard(std::cout);
	Player whitePlayer(true);
	Player blackPlayer(false);
	assert(whitePlayer.IsWhite());
	assert(!whitePlayer.IsBlack());
	assert(!blackPlayer.IsWhite());
	assert(blackPlayer.IsBlack());
	
	return 0;
}