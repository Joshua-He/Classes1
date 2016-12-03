#include <iostream>
#include "VideoGame.h"
#include <string.h>

using namespace std;

//Constructor
VideoGame::VideoGame(){
  type =2; 
  publisher[0] = '\0';
  rating[0] = '\0';
}
VideoGame::~VideoGame(){
  //Deconstructor
}

void VideoGame::setInfo(){
  cout << "Enter video game info: " << endl; 
  cout << "Enter title" << endl;
  cin.getline(title, 100);
  cout << "Enter Year" << endl;
  cin.getline(year, 10);
  cout << "Enter Publisher" << endl;
  cin.getline(publisher, 100);
  cout << "Enter rating" << endl;
  cin.getline(rating, 100);
}

void VideoGame::displayInfo(){
  cout << "VideoGame Info: " << title << ", " << year << ", " << publisher << ", " << rating << "." << endl;
}
