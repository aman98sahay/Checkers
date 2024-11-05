#include <iostream>
#include <climits>
#include <fmt/core.h>
#include <fmt/color.h>
using namespace std;

#include <MeshData.hpp>
#include <MeshPrinter.hpp>

int main() {

	MeshData obj;
	MeshPrinter printer;

	printer.printMesh(obj);

	fmt::print(fg(fmt::color::blue)| bg(fmt::color::sandy_brown),"Hello my friend {}", 23);
	cout << "Hello ";


	return EXIT_SUCCESS;

	// int depth;
	// int length;
	// char ch;

	

	// cout << "Enter the depth and length of the mesh that will be used for Tic-Tak-Toe "
	// 	"\n(format depth, length(ie the depth then a ',' and then length):";

	// while (!bool(cin >> depth >> ch >> length)) {
	// 	endl(cout << "invalid input, please try again:");
	// 	cin.clear(); // clears the error flags
	// 	// this line discards all the vInput waiting in the stream
	// 	cin.ignore(INT_MAX, '\n'); // as std::numeric_limits<std::streamsize>::max() is not compiling in linux
	// }

	// TikTakToe tk(depth, length);
	// tk.startGame();
	
	// return 0;

}