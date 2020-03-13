#include "File.h"

File::File(){
}

File::~File(){
}

string File::filePrompt(string user)
{
  int textFinder;
  File file1;
  string fileUser;
  bool isGood = false;

  while(!isGood)
  {
    cin >> fileUser;
    textFinder = fileUser.find(".txt");
    if (textFinder == string::npos) // does not contain txt
    {
      cout << "File Can not be found" << endl;
      continue;
    }
    else {
    isGood = true;
    cout << file1.fileIsGood(fileUser) << endl;
    }
  }
}


bool File::fileIsGood(string file)
{
  File file2;
  string line = "";
  int row;
  int col;
  char cell;
  //vector<string> v;
  char cells[20][20];
  ifstream myfile (file);
  ifstream inFile;
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline(myfile,line);
      //cout << line << endl;
      row = stoi(line); // si
      getline(myfile,line);
      col = stoi(line);
      while (getline(myfile, line))
      {
        for(int l = 0; l < line.length();++l){
                //cout << line[l] << endl; // gets indvidual char from line
                //cell = line[l];
                //c.isCellAlive(cell);
          }

        }
   // if (!line.empty())
        // v.push_back(line);
      }

  }// end of opening file
  else
  {
    cout << "Unable to open file" << endl;
  }
  cout << "row: " << row << endl;
  cout << "col: " << col << endl;

 //  for( int i = 0; i < row; ++i)
 // for( int j = 0; j < col; ++j)
 //   cout << v[i][j] << " \n" [j == col-1];

  myfile.close();
}
