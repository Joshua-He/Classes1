#include <iostream>
#include "Music.h"
#include <string.h>


using namespace std;

Music::Music(){
  type =3; 
  artist[0] = '\0';
  publisher[0] = '\0';
  duration[0] = '\0';

}

void Music::setInfo(){

  cout << "enter title" << endl;
  cin >> title;
  cout << "enter artist" << endl;
  cin >> artist;
  cout << "enter year" << endl;
  cin >> year;
  cout << "enter publisher" << endl;
  cin >> publisher;
  cout << "enter duration" << endl;
  cin >> duration;
}
void Music::displayInfo(){
  cout << "Music info: " << title << ", " << artist << ", " << year << "\
, " << publisher << ", " << duration <<  endl;

}



