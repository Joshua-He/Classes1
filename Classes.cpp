#include <iostream>
//#include "Media.h"
#include <string.h>
#include "Movies.h"
#include <vector>

using namespace std;

int main(){
  vector<Media*> mediaList;
  char input[10];
  int on = 1;
  int variable = 0;
  int count = 0;
  int mediaType;
  while(on == 1){
    cout << "Enter command (ADD, Search, Delete, QUIT)" << endl;
    cin >> input;
    if (!strcmp(input, "ADD")){
      cout << "Input which media type (1 for movie, 2 for videogame, 3 for music" << endl;
      cin >> mediaType;
      if(mediaType == 1){
	Movies* m = new(Movies);
	m->setInfo();
        m->displayInfo();
	mediaList.push_back(m);
	count++;
      }
    } 

    if (!strcmp(input, "QUIT")){
      on = 0;
    }
    if (!strcmp(input, "Search")){
	cout << "Search by year or title (1 or 2, respectively)" << endl;
	cin >> variable;
	if (variable == 1){
	  char year[10];
	  cout << "input year" << endl;
	  cin >> year;
	  for (int i = 0; i < count; i++){
	    if (!strcmp(mediaList[i]->getYear(), year)){ //if the entered year matches the one in the vector, then print it out
	      ((Movies*)mediaList[i])->displayInfo();
	      }
	      }//for loop
	  }//End of if
	}//end of search
    if (!strcmp(input, "Delete")){
      
	char title[100];
	cout << "input title (no spaces please)" << endl;
	cin >> title;
	for (int i = 0; i < count; i++){
	  if(!strcmp(mediaList[i]->getTitle(), title)){//same as above
	    delete mediaList[i]; //deconstruct and clears the memory 
	    mediaList.erase(mediaList.begin() + i); // delete the entry if it matches the entered year, delete the ith in the vector
	    count--;
	  }
	}
   

    }//End of delete
    }//End of while
  
}

