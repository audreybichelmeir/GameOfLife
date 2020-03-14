#include "GameOfLife.h"
#include "File.cpp"
#include "Cell.cpp"

void GameOfLife::startGame() {

}

void GameOfLife::update() {

}

void GameOfLife::endGame(){

}

void GameOfLife::userQueerE(){ // lol I'm funny
  File rf;
  GameOfLife l;
  Cell c;

  string isRandom;
  int numColumn;
  int numRows;
  string gameMode;
  int gameModeNum;
  double percentAlive;
  string fileName;
  bool isGood = false;

  while (!isGood) {
    cout << "Which game mode do you want to play: Classic, Donut, or Mirror? (Type first letter): " << endl;
    cin >> gameMode;
    if (gameMode == "C" || gameMode == "c"){
      gameModeNum = 1;
      isGood = true;
      //cout << "Classic" << endl;
    }
    else if (gameMode == "D" || gameMode == "d"){
      gameModeNum = 2;
      isGood = true;
      //cout << "Donut" << endl;
    }
    else if (gameMode == "M" || gameMode == "m"){
      gameModeNum = 3;
      isGood = true;
      //cout << "Mirror" << endl;
    }
    else {
      cout << "You did not enter a game mode" << endl;
    }
  }

  isGood = false;

  while(!isGood) {
    cout << "Would you like to use a text file or make a random grid? (type '1' or '2'): " << endl;
    cin >> isRandom;
    if (isRandom == "1") {
      cout << "Please enter name of file: " << endl;
      rf.filePrompt("hello");
      isGood = true;
    }
    else if (isRandom == "2") {
      cout << "Enter the number of rows: " << endl;
      cin >> numRows;
      cout << "Enter the number of columns: " << endl;
      cin >> numColumn;
      cout << "Enter percent of cells alive (i.e. type 5% as '5'): " << endl;
      cin >> percentAlive;
      percentAlive = percentAlive / 100;
      c.askRowCol(numRows, numColumn, percentAlive);
      isGood = true;
    }
    else {
      cout << "You did not enter one of the options" << endl;
    }
  }
}

void GameOfLife::pause(){

}
