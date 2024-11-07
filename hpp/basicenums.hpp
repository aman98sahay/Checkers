#pragma once 
#include <cstdint>


enum class gameBlock : int8_t {
	EMPTY,
    NON_USE_TILE,
	RED_PLAYER,
	RED_PLAYER_KING,
    RED_SELECTED_PLAYER,
	BLUE_PLAYER,
	BLUE_PLAYER_KING,
    BLUE_SELECTED_PLAYER,
	CURRENT_MOVE_POSSIBLE,
};