#include "Cell.h"

Cell::Cell(){

}

Cell::~Cell(){

}

int Cell::askRowCol(int row, int column, double percentAlive){

  int rows = row;
  if(rows <= 0)
  {
    cout << "Row count must be greater than zero. Was " <<  rows << endl;
    return -1;
  }
  rows+=2; //boarder

  int columns = column;
  if(columns <=0)
  {
    cout << "Column count must be greater than zero. Was " << columns << endl;
    return -1;
  }
  columns+=2; //boarder

  //double percentAlive = percentAlive;
  if(percentAlive < 0 || percentAlive > 1)
  {
    cout << "Percent alive must be between 0 and 100. Was " << (percentAlive * 100) << "%" << endl;
    return -1;
  }
  begin(rows, columns, percentAlive);
}

void Cell::display(int rows, int columns, char* simulation)
{
  cout << "\n\n\n\n\n" << endl;
    for(int y = 1; y < rows - 1;++y){
      for(int x = 1; x < columns -1 ;++x){
      cout << *(simulation + y*columns + x);
    }
      cout << "\n" << endl;
  }
}

/*
RULES
Any live cell with fewer than two live neighbours dies, as if caused by under-population.
Any live cell with two or three live neighbours lives on to the next generation.
Any live cell with more than three live neighbours dies, as if by over-population.
Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
*/
int Cell::countNeighborhood(int rows, int columns, int x, int y, char* simulation)
{
    int count = 0;

    int pivot = y*columns+x;

    for(int i = -1; i <= 1; i++)
    {
        for(int j = -1; j <= 1; j++)
        {
            char c = *(simulation+pivot+(i*columns)+j);

            if(c == 'X') count++;
        }
    }
    return count;
}

char* Cell::step(int rows, int columns, char* prevSimulation)
{
    char* steppedSimulation = (char*) calloc(rows*columns, sizeof(int));
    if(steppedSimulation == NULL) return NULL;

    for(int y = 1; y < rows - 1; y++)
    {
        for(int x = 1; x < columns - 1; x++)
        {
            int live = countNeighborhood(rows,columns,x,y,prevSimulation);
            char cell = *(prevSimulation+y*columns+x);
            if(cell == 'X') live--;
            *(steppedSimulation+y*columns+x) = cell;

            if(live < 2)
            {
                *(steppedSimulation+y*columns+x) = '-';
            }
            else if((live == 2 || live == 3) && cell == 'X')
            {
                *(steppedSimulation+y*columns+x) = 'X';
            }
            else if(live > 3 && cell == 'X')
            {
                *(steppedSimulation+y*columns+x) = '-';
            }
            else if(live == 3 && cell == '-')
            {
                *(steppedSimulation+y*columns+x) = 'X';
            }
        }
    }
    return steppedSimulation;
}

void Cell::begin(int rows, int columns, double percentAlive)
{
  //puts("Beginning!");
  char* simulation = create(rows, columns, percentAlive);
  if(simulation == NULL) return;
  display(rows, columns, simulation);

  while(1)
  {
      char* newSim = step(rows,columns,simulation);
      if(newSim == NULL) return;

      free(simulation);
      simulation = newSim;
      display(rows,columns,simulation);
      cin.get();
  }

}

double Cell::getRandomDoubleInRange(double min, double max)
{
  return ((double)rand()/RAND_MAX)*(max-min)+min;
}

char* Cell::create(int rows, int columns, double percentAlive)
{
  char* simulation = (char*)calloc(rows*columns, sizeof(char));
  if(simulation == NULL)
  {
    return NULL;
  }
    for(int y = 1; y < rows - 1;++y){
      for(int x = 1; x < columns -1 ;++x){
      if(getRandomDoubleInRange(0.0,1.0)<=percentAlive){
        *(simulation + y*columns + x) = 'X';
      }
      else{
         *(simulation + y*columns + x) = '-';
      }
    }
  }
  return simulation;
}
