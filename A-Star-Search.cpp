// A-Star-Search.cpp : Defines the entry point for the application.

#include "A-Star-Search.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
     // Create 2d Board - Grid
	 vector<vector<int>> board = { {0, 1, 0, 0, 0, 0},
		                           {0, 1, 0, 0, 0, 0},
		                           {0, 1, 0, 0, 0, 0},
		                           {0, 1, 0, 0, 0, 0},
		                           {0, 1, 0, 0, 0, 0} };


	 printBoard(board);

	return 0;
}
