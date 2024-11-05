#include "MeshData.hpp"
#include <assert.h>

#include "basicenums.hpp"

MeshData::MeshData() 
{
	data = new gameBlock[8*8];

	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			if ((i % 2 == 1 && j % 2 == 1) || (i % 2 == 0 && j % 2 == 0)){
				if (i <= 2) {
					data[(i - 1) * 8 + j-1] = gameBlock::BLUE_PLAYER;
				} else if (i >=7) {
					data[(i - 1) * 8 + j-1] = gameBlock::RED_PLAYER;
				} else 
					data[(i - 1) * 8 + j-1] = gameBlock::EMPTY;
			} else {
				data[(i - 1) * 8 + j-1] = gameBlock::NON_USE_TILE;
			}
		}
	}
}

MeshData::~MeshData()
{
	delete[] data;
}

gameBlock & MeshData::getDataAt(int pLength, int pDepth)
{
	return data[pLength + 8 * pDepth];
}

void MeshData::setDataAt(int pLength, int pDepth, gameBlock pGameDataThere)
{
	data[pLength + 8 * pDepth] = pGameDataThere;
}



