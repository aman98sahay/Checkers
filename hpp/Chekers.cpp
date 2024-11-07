#include <iostream>

#include "Chekers.hpp"
#include <MeshPrinter.hpp>

Checkers::Checkers()
{
	vGameData = new MeshData();
}

Checkers::~Checkers()
{
	delete vGameData;
}

void Checkers::startGame()
{
	using std::cout;
	while (!vIsGameOver) {
#if		_WIN32
		system("cls");
#elif	__APPLE__ || __linux__
		system("clear");
#endif
		MeshPrinter::printMesh(*vGameData);
		takeUserInputForPieceSelection();
		SelectMovePiece();
		checkForGameOver();
	}

	// to refresh the mesh after the last input is given in no win situation 
	system("cls");
	MeshPrinter::printMesh(*vGameData);

	cout << "The game is won by player with color : ";
	if (Checkers::vHasTopSidePlayerWon && vIsTopPlayerBlue) {
		cout << "Blue";
	}
	else if (Checkers::vHasTopSidePlayerWon && !vIsTopPlayerBlue)
		cout << "Red";
	else if (!Checkers::vHasTopSidePlayerWon && vIsTopPlayerBlue)
		cout << "Red";
	else
		cout << "Blue";
	
	cout << "\n";

}

void Checkers::checkForGameOver()
{
}

void Checkers::takeUserInputForPieceSelection()
{
	using std::cout, std::cin;
	char ch = 'f';

	cout << "\nChance of player ";

	if (vInput.vIsTopSidePlayerMove) {
		printTopPlayer();
	}
	else {
		printBottomPlayer();
	}

	cout << "\nEnter the location in the format depth, length(ie the depth then a ',' and then length)"
		" as is given in the Checkers board : ";

	while (true) {

		while (!bool(cin >> vInput.d >> ch >> vInput.l)) {
			endl(cout << "invalid input, please try again:");
			cin.clear(); // clears the error flags
			// this line discards all the vInput waiting in the stream
			cin.ignore(INT_MAX, '\n');  //as std::numeric_limits<std::streamsize>::max() is not compiling in linux
		}

		if (vInput.l > 8 || vInput.d > 8 || vInput.l<0 || vInput.d < 0 || (vInput.l + vInput.d ) % 2 == 1) {

			endl(cout << "invalid input, please try again:");
		}
		else
			break;

	}
}

void Checkers::SelectMovePiece()
{

}

void Checkers::printTopPlayer() const
{
	using std::cout;
	if (vIsTopPlayerBlue)
		cout << "Blue";
	else
		cout << "Red";
}

void Checkers::printBottomPlayer() const
{
	using std::cout;
	if (!vIsTopPlayerBlue)
		cout << "Blue";
	else
		cout << "Red";
}

std::vector<std::pair<int, int>> Checkers::listOfPossibleMoves(int l, int d)
{
	return std::vector<std::pair<int, int>>();
}
