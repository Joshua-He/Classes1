#include <iostream>
#ifndef MEDIA_H
#define MEDIA_H

class Media
{
 public:
  Media();
  ~Media();
  int getType();
  void setType(int t);
  char* getYear();
  char* getTitle();

  // search by year or title; return 1 if there is match, elase 0
  int searchInfo(char searchType, char* inputValue);
  
  void setTitle(char* t);
  void setYear(char* t);
  char title[100];
  char year[10];
  int type;


};

#endif
