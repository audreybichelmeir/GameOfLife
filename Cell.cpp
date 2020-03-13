#include "Cell.h"

Cell::Cell()
{
  isAlive = false;
  numNeighbors = 0;
}

Cell::~Cell()
{
}

bool Cell::isCellAlive(char cell)
{
  if(cell == 'X')
  {
    isAlive = true;
    return isAlive;

  }
  if(cell == '-')
  {
    isAlive = false;
    return isAlive;
  }
}
