#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;

class File
{
public:
  File();
  ~File();
  string filePrompt(string user);
  bool fileIsGood(string fileUser);
};
