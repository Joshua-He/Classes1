#include <iostream>
#include "Music.h"
#include <string.h>


using namespace std;

//Constructor
Music::Music(){
  type =3; 
  artist[0] = '\0';
  publisher[0] = '\0';
  duration[0] = '\0';

}
Music::~Music(){
  //Deconstructor
}

void Music::setInfo(){

  cout << "Enter music info: " << endl; 
  cout << "enter title" << endl;
  cin.getline(title, 100);
  cout << "enter artist" << endl;
  cin.getline(artist, 100);
  cout << "enter year" << endl;
  cin.getline(year, 10);
  cout << "enter publisher" << endl;
  cin.getline(publisher, 100);
  cout << "enter duration" << endl;
  cin.getline(duration, 100);
}
void Music::displayInfo(){
  cout << "Music info: " << title << ", " << artist << ", " << year << "\
, " << publisher << ", " << duration <<  endl;

}



