#include <iostream>
#include "VideoGame.h"
#include <string.h>

using namespace std;

VideoGame::VideoGame(){
  publisher[0] = '\0';
  rating[0] = '\0';
}

void VideoGame::setInfo(){
  cout << "Enter title" << endl;
  cin >> title;
  cout << "Enter Year" << endl;
  cin >> year;
  cout << "Enter Publisher" << endl;
  cin >> publisher;
  cout << "Enter rating" << endl;
  cin >> rating;
}

void VideoGame::displayInfo(){
  cout << "VideoGame Info: " << title << ", " << year << ", " << publisher << ", " << rating << "." << endl;
}
