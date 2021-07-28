#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<cassert>

namespace chess
{
	class Player
	{
	public:
		Player() = delete;
		Player(bool isWhite);
		~Player();

		bool IsWhite() const;
		bool IsBlack() const;
	private:
		bool is_white;
	};
}