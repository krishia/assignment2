#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<cassert>

namespace chess
{
	class Board
	{
	public:
		Board();
		Board(std::istream& is);
		Board(const Board& other);
		Board& operator=(const Board& other);
		~Board();

		void PrintBoard(std::ostream& os);
	private:
		char chess_board[8][8];
	};
}