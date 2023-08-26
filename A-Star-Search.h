// A-Star-Search.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>

using namespace std;

void printBoard(vector<vector<int>>& grid);

void printBoard(vector<vector<int>>& grid)
{
	// Prints Vector of Vector ints in 2d Board Format
	for (size_t i = 0; i < grid.size(); ++i)
	{
		cout << " " << endl;
		for (size_t j = 0; j < grid[i].size(); ++j)
		{
			cout << grid[i][j] << " ";
		}
	}

	cout << endl;
}