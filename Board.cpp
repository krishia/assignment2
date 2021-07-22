#include "Board.h"

chess::Board::Board() {
	
	char line_0[8] = { 'R','N','B','K','Q','B','N','R' };
	char line_1[8] = { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'};
	char line_2[8] = { ' ', };
	char line_3[8] = { ' ', };
	char line_4[8] = { ' ', };
	char line_5[8] = { ' ', };
	char line_6[8] = {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'};
	char line_7[8] = { 'r', 'n', 'b;', 'k', 'q', 'b', 'n', 'r'};
	

	for (int i = 0; i < 8; ++i) {
		chess_board[0][i] = line_0[i];
	}
	for (int i = 0; i < 8; ++i) {
		chess_board[1][i] = line_1[i];
	}
	for (int i = 0; i < 8; ++i) {
		chess_board[2][i] = line_2[i];
	}
	for (int i = 0; i < 8; ++i) {
		chess_board[3][i] = line_3[i];
	}
	for (int i = 0; i < 8; ++i) {
		chess_board[4][i] = line_4[i];
	}
	for (int i = 0; i < 8; ++i) {
		chess_board[5][i] = line_5[i];
	}
	for (int i = 0; i < 8; ++i) {
		chess_board[6][i] = line_6[i];
	}
	for (int i = 0; i < 8; ++i) {
		chess_board[7][i] = line_7[i];
	}

}	

chess::Board::Board(std::istream& is) {
	char temp_chess_board[8][8]= {
		{ 'R','N','B','K','Q','B','N','R'},
		{ 'P','P','P','P','P','P','P','P'},
		{ ' ',},
		{ ' ',},
		{ ' ',},
		{ ' ',},
		{'p','p','p','p','p','p','p','p'},
		{ 'r','n','b','k','q','b','n','r'}
	};
	std::string file_name;
	std::getline(is,file_name);

	std::ifstream fin;
	fin.open(file_name);
	if (fin.is_open()) {
		std::string piece_name;
		int piece_list[12] = { 0. };

		std::string x;
		int _x = 0;
		std::string y;
		int _y = 0;
		int x_y_list[8][8] = { {0,},{0,}, {0,}, {0,}, {0,}, {0,}, {0,}, {0,} };
		

		while (true) {
			std::getline(fin, piece_name, ' ');
			if ((piece_name == "R") || (piece_name == "N") || (piece_name == "B") || (piece_name == "Q") || (piece_name == "K") ||
				(piece_name == "r") || (piece_name == "n") || (piece_name == "b") || (piece_name == "q") || (piece_name == "k") ||
				(piece_name == "P") || (piece_name == "p")) {

				if (piece_name == "R") {
					if (piece_list[0] >=2) {
						continue;
					}
					++piece_list[0];
				}
				else if (piece_name == "N") {
					if (piece_list[1] >=2) {
						continue;
					}
					++piece_list[1];
				}
				else if (piece_name == "B") {
					if (piece_list[2] >=2) {
						continue;
					}
					++piece_list[2];
				}
				else if (piece_name == "Q") {
					if (piece_list[3] >=1) {
						continue;
					}
					++piece_list[3];
				}
				else if (piece_name == "K") {
					if (piece_list[4] >= 1) {
						continue;
					}
					++piece_list[4];
				}
				else if (piece_name == "r") {
					if (piece_list[5] >= 2) {
						continue;
					}
					++piece_list[5];
				}
				else if (piece_name == "n") {
					if (piece_list[6] >= 2) {
						continue;
					}
					++piece_list[6];
				}
				else if (piece_name == "b") {
					if (piece_list[7] >= 2) {
						continue;
					}
					++piece_list[7];
				}
				else if (piece_name == "q") {
					if (piece_list[8] >= 1) {
						continue;
					}
					++piece_list[8];
				}
				else if (piece_name == "k") {
					if (piece_list[9] >= 1) {
						continue;
					}
					++piece_list[9];
				}
				else if (piece_name == "P") {
					if (piece_list[10] >=8) {
						continue;
					}
					++piece_list[10];
				}
				else if (piece_name == "p") {
					if (piece_list[11] >= 8) {
						continue;
					}
					++piece_list[11];
				}
				else {
					continue;
				}

				std::getline(fin, x, ' ');
				if ((x == "a") || (x == "b") || (x == "c") || (x == "d") || (x == "e") || (x == "f") || (x == "g") || (x == "h")) {
					if (x == "a") {
						_x = 0;
					}
					else if (x == "b") {
						_x = 1;
					}
					else if (x == "c") {
						_x = 2;
					}
					else if (x == "d") {
						_x = 3;
					}
					else if (x == "e") {
						_x = 4;
					}
					else if (x == "f") {
						_x = 5;
					}
					else if (x == "g") {
						_x = 6;
					}
					else if (x == "h") {
						_x = 7;
					}
					else {
						continue;
					}
					std::getline(fin, y);
					if ((y == "0") || (y == "1") || (y == "2") || (y == "3") || (y == "4") || (y == "5") || (y == "6") || (y == "7")) {
						if (y == "0") {
							_y = 0;
						}
						else if (y == "1") {
							_y = 1;
						}
						else if (y == "2") {
							_y = 2;
						}
						else if (y == "3") {
							_y = 3;
						}
						else if (y == "4") {
							_y = 4;
						}
						else if (y == "5") {
							_y = 5;
						}
						else if (y == "6") {
							_y = 6;
						}
						else if (y == "7") {
							_y = 7;
						}
						else {
							continue;
						}

						if (x_y_list[_x][_y] != 0) {
							continue;
						}
						else {
							++x_y_list[_x][_y];
						}
					}
				}
			}
		}
		
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				if (x_y_list[i][j] == 0) {
					temp_chess_board[i][j] == ' ';
				}
			}
		}

		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				chess_board[i][j] = temp_chess_board[i][j];
			}
		}
		
	
	}



	fin.close();
}

chess::Board::Board(const Board& other) {
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			chess_board[i][j] = other.chess_board[i][j];
		}
	}
}

chess::Board& chess::Board::operator=(const Board& other) {
	Board board;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			board.chess_board[i][j] = other.chess_board[i][j];
		}
	}

	return board;
}

chess::Board::~Board() {

}

void chess::Board::PrintBoard(std::ostream& os) {
	os<<"  abcdefgh  "<< std::endl;
	os << " +--------+ " << std::endl;
	os << "0|"<<chess_board[0] <<"|" << std::endl;
	os << "1|"<< chess_board[1] <<"|" << std::endl;
	os << "2|"<< chess_board[2] <<"|" << std::endl;
	os << "3|"<< chess_board[3] <<"|" << std::endl;
	os << "4|"<< chess_board[4] <<"|" << std::endl;
	os << "5|"<< chess_board[5] <<"|" << std::endl;
	os << "6|"<< chess_board[6] <<"|" << std::endl;
	os << "7|"<< chess_board[7] <<"|" << std::endl;
	os << " +--------+ " << std::endl;
}
