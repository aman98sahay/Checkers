#include <vector>

#include <basicenums.hpp>
#include <MeshData.hpp>

struct CurrentInputLocation {
	int l;
	int d;
	bool vIsTopSidePlayerMove = false;
};

class Checkers {

public:

Checkers();
~Checkers();

void startGame();
private:

void checkForGameOver ();
void takeUserInputForPieceSelection();
void SelectMovePiece();
void printTopPlayer() const;
void printBottomPlayer() const;


std::vector<std::pair<int,int>> listOfPossibleMoves (int l, int d);



MeshData * vGameData;
CurrentInputLocation vInput;
bool vHasTopSidePlayerWon = false;
bool vIsGameOver = false;
bool vIsTopPlayerBlue = true;
std::pair<int, int> SelectedPiece;
};


/*
*
* l +  d == even then it is a valid block otherwise it is a non use block
*/