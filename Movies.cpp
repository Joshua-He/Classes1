#include <iostream>
#include "Movies.h"
//#include "Media.h"
#include <string.h>


using namespace std;

Movies::Movies(){
  director[0] = '\0';
  duration[0] = '\0';
  year[0] = '\0';


};
void Movies::setInfo(){
  cout << "Enter movie info" << endl;
  cout << "Enter title" << endl;
  cin >> title;
  cout << "Enter year" << endl;
  cin >> year;
  cout << "Enter director" << endl;
  cin >> director;
  cout << "Enter duration" << endl;
  cin >> duration;
  cout << "Enter rating" << endl;
  cin >> rating;
}
void Movies::displayInfo(){
  cout << "Movie info: " << title << ", " << year << ", " << director << ", " << duration << ", " << rating << endl;
}
