#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Cell
{
public:
  Cell();
  ~Cell();
  int askRowCol(int rows, int columns, double percentAlive);
  void begin(int rows, int columns, double percentAlive);
  char* create(int rows, int columns, double percentAlive);
  double getRandomDoubleInRange(double min, double max);
  void display(int rows, int columns, char* simulation);
  int countNeighborhood(int rows, int columns, int x, int y, char* simulation);
  char* step(int rows, int columns, char* prevSimulation);
private:
//N/A
};
