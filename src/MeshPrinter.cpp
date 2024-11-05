#include <iostream>
#include <fmt/color.h>
#include <fmt/core.h>

#include "MeshPrinter.hpp"
#include "MeshData.hpp"


#include "basicenums.hpp"



void MeshPrinter::PrivatePrintLocationColor(gameBlock pBlockType)
{
	using std::cout;
	switch (pBlockType) {

	case gameBlock::EMPTY : 
		fmt::print(bg(fmt::color::purple)|fg(fmt::color::purple), " ");break;

	case gameBlock::RED_PLAYER : 
		fmt::print(bg(fmt::color::dark_red), "#");break;

	case gameBlock::RED_PLAYER_KING : 
		fmt::print(bg(fmt::color::red), "#");break;

	case gameBlock::BLUE_PLAYER : 
		fmt::print(bg(fmt::color::dark_blue), "#");break;

	case gameBlock::BLUE_PLAYER_KING : 
		fmt::print(bg(fmt::color::blue), "#");break;

	case gameBlock::CURRENT_MOVE_POSSIBLE : 
		fmt::print(bg(fmt::color::white), "#");break;

	case gameBlock::NON_USE_TILE : 
		fmt::print(bg(fmt::color::black)|fg(fmt::color::black), " ");break;
	}
}

void MeshPrinter::printMesh(MeshData& obj)
{
	using std::cout;
	printf("       ");
	for (int l = 0; l <8; l++) {
		printf("%2d", l + 1);
	}

	cout << "\n";

	for (int d = 0; d < 8*2; d++) {

		if (d % 2 == 1) {
			printf("%5d  ", d/2 + 1);
		}
		else {
			printf("       ");
		}

		for (int l = 0; l <8*2; l++) {
			PrivatePrintLocationColor(obj.getDataAt(l/2, d/2));
		}
		cout << "\n";
	}

}
