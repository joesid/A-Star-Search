// A-Star-Search.cpp : Defines the entry point for the application.

#include "A-Star-Search.h"
#include <vector>
#include <sstream>
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
    cout << " " << endl;
    ReadBoardFile("1.board");

	return 0;
}

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
        cerr << "Failed to open the file. checking directory location might help " << endl;
    }

    string line;

    while (getline(inputFile, line)) {

        vector<int> parsedData = ParseLine(line);
        //istringstream iss(line);

        //string content = iss.str();
        //cout << content << endl;

        for(int num: parsedData) {
            cout << num << " " ;
        }
        cout << "\n" ;
    }


    inputFile.close();
}

vector<int> ParseLine(const string& line) {
    vector<int> result;
    istringstream iss(line);
    char comma;

    int num;
    while (iss >> num >> comma) {
        result.push_back(num);

        if (iss >> num) {
            result.push_back(num);
        }
    }

    return result;

}