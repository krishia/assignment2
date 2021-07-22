#include "Player.h"

chess::Player::Player(bool isWhite) {
	is_white = isWhite;
}

chess::Player::~Player() {}

bool chess::Player::IsBlack()const {
	if (is_white) {
		return false;
	}
	else {
		return true;
	}
}

bool chess::Player::IsWhite()const {
	if (is_white) {
		return true;
	}
	else {
		return false;
	}

}