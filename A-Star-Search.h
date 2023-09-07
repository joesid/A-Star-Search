// A-Star-Search.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
#include<fstream>
#include<string>

using namespace std;

void printBoard(vector<vector<int>>& grid);
void ReadBoardFile(const std::string& filePath);

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

void ReadBoardFile(const std::string& filePath) {
    ifstream file(filePath); //open the file for reading

    if (file) {
         string line;
        while (std::getline(file, line)) {
            cout << line << "\n";
        }
    } else {
        cerr << "Error opening file: " << filePath << endl;
    }
}