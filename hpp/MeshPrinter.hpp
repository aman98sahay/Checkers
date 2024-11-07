#pragma once 
#include <cstdint>

class MeshData;
enum class gameBlock: int8_t;
class MeshPrinter {

    static void PrivatePrintLocationColor(gameBlock pBlockType);
public:
	static void printMesh(MeshData& obj);
};

/*
* 
* Using fmt to print different colors in console
*/