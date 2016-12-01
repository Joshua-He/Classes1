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
