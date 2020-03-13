class Cell
{
public:
  bool isAlive;
  //int numNeighbors;
  Cell();
  ~Cell();
  bool isCellAlive(char cell);

private:
  int numNeighbors;

};
