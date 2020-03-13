#include "GameOfLife.h"
#include "File.cpp"

void GameOfLife::startGame() {

}

void GameOfLife::update() {

}

void GameOfLife::endGame(){

}

void GameOfLife::userQueerE(){ // lol I'm funny
  File rf;
  GameOfLife l;

  int isRandom;
  int numColumn;
  int numRows;
  string gameMode;
  int gameModeNum;
  double percentAlive;
  string fileName;

  cout << "Which game mode do you want to play: Classic, Donut, or Mirror? (Type first letter): " << endl;
  cin >> gameMode;
  if (gameMode == "C" || gameMode == "c"){
    gameModeNum = 1;
  }
  else if (gameMode == "D" || gameMode == "d"){
    gameModeNum = 2;
  }
  else if (gameMode == "M" || gameMode == "m"){
    gameModeNum = 3;
  }
  cout << "Would you like to use a text file or make a random grid? (type '1' or '2'): " << endl;
  cin >> isRandom;
  if (isRandom == 1) {
    rf.filePrompt("hello");
  }
  else if (isRandom == 2) {
    cout << "Enter the number of rows: " << endl;
    cin >> numRows;
    cout << "Enter the number of columns: " << endl;
    cin >> numColumn;
    cout << "Enter percent of cells alive (i.e. type 5% as '5'): " << endl;
    cin >> percentAlive;
    percentAlive = percentAlive / 100;
    //l.makeRandomGrid(gameModeNum, numRows, numColumn, percentAlive);
  }
  else {
    cout << "MAKE CODE LOOP BACK TO QUESTION IF WEIRD CHOICE" << endl;
  }
}

void GameOfLife::pause(){

}
