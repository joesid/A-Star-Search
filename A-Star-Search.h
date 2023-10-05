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
    kObstacle,
    kClosed
};

void printBoard(vector<vector<State>> board);
vector<vector<State>> ReadBoardFile(const string& filePath);
vector<State> ParseLine(string line);
vector<vector<State>> Search(vector<vector<State>> board, int start[2], int goal[2]);
int Heuristic(int x1,int y1,int x2, int y2);
void AddToOpen(int x, int y, int g, int h, vector<vector<int>>& open, vector<vector<State>>& grid );



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