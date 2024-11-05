#pragma once 
#include <cstdint>


enum class gameBlock : int8_t {
	EMPTY,
	RED_PLAYER,
	RED_PLAYER_KING,
	BLUE_PLAYER,
	BLUE_PLAYER_KING,
	CURRENT_MOVE_POSSIBLE,
	NON_USE_TILE

};