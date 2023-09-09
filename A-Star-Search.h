// A-Star-Search.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

void printBoard(vector<vector<int>>& grid);
void ReadBoardFile(const string& filePath);
vector<int> ParseLine(const string& line);