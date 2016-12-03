#include <iostream>
#include "Media.h"
#include <string.h>

using namespace std;

Media::Media(){
  type = 0;
  title[0] = '\0';
  year[0] = '\0';

}

int Media::getType(){
  return type;

}
void Media::setType(int t){
  type = t;
}
void Media::setTitle(char* t){
  strcpy(title, t);
}
void Media::setYear(char* t){
   strcpy(year, t);
}
char* Media::getYear(){
  return year;
}
char* Media::getTitle(){
  return title;
}

// search by year or title (searchType: 1 for year, 2 for title)
// return 1 if there is match; else 0
int Media::searchInfo(int searchType, char* inputValue){
  // if searchType is 1, then search by year
  if (searchType ==1) {
    if(!strcmp(inputValue, year)){
      return 1; //if the entered year matches the year for the media 
    }
    else{
      return 0;
    }
  }

  // if searchType is 2, then search by title
  if (searchType ==2) {
    if(!strcmp(inputValue, title)){
      return 1; //if the entered title matches the title of the media
    }
    else{
      return 0;
    }
  }

  return 0;
}


