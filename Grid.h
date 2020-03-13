#include<iostream>
#include <string>

using namespace std;

//Grid class

class Grid{

public:
  Grid();
  ~Grid();
  char** grid;
  string printGrid();
  int SIZE = 1;
  //int grid[20][20];
  char** getGrid();
  void setGrid(int i, int j, int value);

private:
};
