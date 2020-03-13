//#include "GameOfLife.h"
#include <iostream>
#include <string>

using namespace std;

class GameMode {
public:
  //void calculateNeighbors(int i, int j, grid g);
  void calculateNeighbors(char cells[3][3], int numRows, int numColumn);
private:
  // N/A
};
/*
int main(int argc, char **argv) {
  GameMode gm;
  int i;
  int j;
  char cells[3][3];
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      cells[i][j] = 'X';
      cout << cells[i][j] << " \n"[j == 3-1];
    }
  }
  cout << endl;
/*
  for (i = 0; j < 2; ++i) {
    for (j = 0; j < 2; ++j) {
      cout << cells[i][j] << " \n"[j == 2-1];
    }
  }
*/
/*
  gm.calculateNeighbors(cells, 3, 3);
  return 0;
}
*/
void GameMode::calculateNeighbors(char cells[3][3], int numRows, int numColumn) {
  for (int i = -1; i <= numRows; ++i) {
    for (int j = -1; j <= numColumn; ++j) {
      if (cells[i][j] != 'X') {
        cells[i][j] = '-';
        cout << cells[i][j] << " "; //\n"[j == 2-1];
      }
      /*
      else if(i == numRows || j == numColumn) {
        cells[i][j] = '-';
        cout << cells[i][j] << " ";
      }
      */
      else {
        cout << cells[i][j] << " ";
      }
    }
    cout << endl;
  }
}
