#include "Grid.h"
Grid::Grid(){
  //initializing all cells to 0
    for(int i=0; i<SIZE; ++i){
      for(int j = 0; j<SIZE; ++j){
        grid[i][j]=0;
      }
    }
}

Grid::~Grid()
{
}

// Grid::Grid(){
//
// }




//returns the element at row i, column j
//assuming i and j are valid indices
char** Grid::getGrid(){
    return grid;
  }

//updates the element at row i, column j to given value
//assuming i and j are valid indices
void Grid::setGrid(int i, int j, int value){
    grid[i][j]=value;
  }


string Grid::printGrid()
{

}
