// A-Star-Search.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

enum State {
    // Define an enumeration to represent states in the grid.
    kEmpty,
    kObstacle
};

void printBoard(vector<vector<State>> board);
vector<vector<State>> ReadBoardFile(const string& filePath);
vector<State> ParseLine(string line);
vector<vector<State>> Search(vector<vector<State>> board, int start[], int end[]);



// Function to convert State enum values to strings for display.
 string CellString(State val)
 {
     if (val == kObstacle )
     {
         return "⛰️";
     }
     else {
         return "0 ";
     }
 }