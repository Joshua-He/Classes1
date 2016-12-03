#include <iostream>
#include "Media.h"
#include <string.h>
#include "Movies.h"
#include <vector>
#include "VideoGame.h"
#include "Music.h"

using namespace std;

int main(){
  vector<Media*> mediaList;
  char input[20];
  int on = 1;
  int variable = 0;
  int count = 0;
  char mediaType;
  char searchType;
  char inputValue[100]; 
  
  while(on == 1){
    cout << "Enter command (ADD, SEARCH, DELETE, QUIT)" << endl;
    cin >> input;

    // command: ADD.  Add one of the media types
    if (!strcmp(input, "ADD")){
      cout << "Input which media type (1 for movie, 2 for videogame, 3 for music)" << endl;
      cin >> mediaType;
      cin.ignore();
      
      if(mediaType == '1'){
	Movies* m = new(Movies);
	m->setInfo();
        m->displayInfo();
	mediaList.push_back(m);
	count++;
      }
      if(mediaType == '2'){
	VideoGame* v = new(VideoGame);
	v->setInfo();
	v->displayInfo();
	mediaList.push_back(v);
	count++;

      }
      if(mediaType == '3'){
	Music* mu = new(Music);
	mu->setInfo();
	mu->displayInfo();
	mediaList.push_back(mu);
	count++;
      }
      
    } 

    // command: QUIT.  quit the while loop
    if (!strcmp(input, "QUIT")){
      on = 0; //exit while loop if quit
    }

    // command: SEARCH.  Search media list by year or title
    if (!strcmp(input, "SEARCH")){
	cout << "Search by year or title (enter 1 for year, 2 for title)" << endl;
	cin >> searchType;
	cin.ignore();

	inputValue[0]='\0';
	if (searchType == '1') {
	     cout << "input year: " << endl;
	     cin.getline(inputValue, 100);
	}
	else if (searchType =='2') {
	  cout << "input title: " << endl;
	  cin.getline(inputValue, 100);
	}
	else
	  {
	    cout << "invalid input. " << endl;
	  }
	    
	int searchCount=0;
        // loop through the vector to find the match
	for (int i = 0; i < count; i++){
	     if (mediaList[i]->searchInfo(searchType, inputValue) ==1) {
	       searchCount ++;
	       
	         //if the entered year matches the one in the vector
	         // display based on mediaType
	          int mType = mediaList[i]->getType();
	          if (mType ==1) {
	            ((Movies*)mediaList[i])->displayInfo();
		  }
		  if (mType==2) {
		    ((VideoGame*)mediaList[i])->displayInfo();
		  }
		  if (mType==3) {
		    ((Music*)mediaList[i])->displayInfo();
		  }
		      
	     }  // end of if
	   }//for loop

	cout << "Number of media matching the search: " << searchCount << endl << endl;
	
	}//end of search

    // command: DELETE. Delete by year or title
  if (!strcmp(input, "DELETE")){
       cout << "Delete by year or title (enter 1 for year, 2 for title):" << endl;
        cin >> searchType;
	cin.ignore();

	inputValue[0]='\0';
        if (searchType == '1') {
             cout << "input year: " << endl;
	     cin.getline(inputValue, 100);
        }
        else if (searchType =='2') {
          cout << "input title: " << endl;
	  cin.getline(inputValue, 100);
        }
	else {
	  cout << "invalid input." << endl;
	}

	int Deletecount =0; 
	for (int i = count-1; i>=0; i--){
	  if (mediaList[i]->searchInfo(searchType, inputValue) ==1) {
	    delete mediaList[i]; //deconstruct and clears the memory 
	    mediaList.erase(mediaList.begin() + i); // delete the entry if it matches the entered search (year or title), delete the ith in the vector
	    Deletecount++;
	  }
	}

	count = count - Deletecount;

	cout << "Number of media deleted: " << Deletecount << endl << endl; 

    }//End of delete
    }//End of while
  
}

