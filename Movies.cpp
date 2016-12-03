#include <iostream>
#include "Movies.h"
//#include "Media.h"
#include <string.h>

using namespace std;

// constructor for Movies class
Movies::Movies(){
  type =1; 
  director[0] = '\0';
  duration[0] = '\0';
  year[0] = '\0';
};

// deconstructor
Movies::~Movies() {
}

// set info for Movies, by getting input
void Movies::setInfo(){
  cout << "Enter movie info" << endl;
  cout << "Enter title" << endl;
  cin.getline(title, 100);
  cout << "Enter year" << endl;
  cin.getline(year, 10);
  cout << "Enter director" << endl;
  cin.getline(director, 100);
  cout << "Enter duration" << endl;
  cin.getline(duration, 100);
  cout << "Enter rating" << endl;
  cin.getline(rating, 100);
}

// display member variable values
void Movies::displayInfo(){
  cout << "Movie info: " << title << ", " << year << ", " << director << ", " << duration << ", " << rating << endl;
}
