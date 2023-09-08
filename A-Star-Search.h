// A-Star-Search.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
#include<fstream>
#include<string>

using namespace std;

void printBoard(vector<vector<int>>& grid);
void ReadBoardFile(const string& filePath);

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

void ReadBoardFile(const string& filePath) {
    //Open the file for reading
    ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        cerr << "Failed to open the file. " << endl;
    }

    string line;

    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
}