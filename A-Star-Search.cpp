// A-Star-Search.cpp : Defines the entry point for the application.

#include "A-Star-Search.h"
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    printBoard(ReadBoardFile("1.board"));

	return 0;
}

void printBoard(vector<vector<State>> grid)
{
    // Prints Vector of Vector ints in 2d Board Format
    for (size_t i = 0; i < grid.size(); ++i)
    {
        cout << " " << endl;
        for (size_t j = 0; j < grid[i].size(); ++j)
        {
            // Call CellString to convert State enum values to strings and print them.
            cout << CellString(grid[i][j]) << " ";
        }
    }

    cout << endl;
}



vector<vector<State>> ReadBoardFile(const string& filePath) {

    vector<vector<State>> board{};

    //Open the file for reading
    ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        cerr << "Failed to open the file. checking directory location might help " << endl;

    }
     

    string line;

    while (getline(inputFile, line)) {

        vector<State> parsedData = ParseLine(line);

        board.push_back(parsedData);
    }

    inputFile.close();

    return board;
}

vector<State> ParseLine(string line) {

    vector<State> result;
    istringstream iss(line);
    char comma;

    int num;
    while (iss >> num) {
        // Depending on the value in the line, add kEmpty or kObstacle to the result.
        if (num == 0)
        {
            result.push_back(kEmpty);
        }
        else
        {
            result.push_back(kObstacle);
        }
        if (iss >> comma) {
            if(comma != ',')
            {
                 cerr << "Error: Expected comma but found " << comma << " '.'" << endl;
                 break; //Handle error and exit the loop
            }

        }
    }

    return result;

}