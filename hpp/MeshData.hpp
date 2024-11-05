#pragma once 
#include <cstdint>

enum class gameBlock : int8_t;

class MeshData {
public:

	MeshData(); // mesh is fixed of 8 X 8 
	~MeshData();

	gameBlock & getDataAt(int pLength, int pDepth); // from bottom left 
	void		setDataAt(int pLength, int pDepth,gameBlock pGameDataThere); // from bottom left 
private:
	gameBlock *data;
};