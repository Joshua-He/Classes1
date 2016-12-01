#include <iostream>
#ifndef MEDIA_H
#define MEDIA_H

class Media
{
 public:
  Media();
  int getType();
  void setType(int t);
  char* getYear();
  char* getTitle();
  void setTitle(char* t);
  void setYear(char* t);
  char title[100];
  char year[10];
  int type;


};

#endif
