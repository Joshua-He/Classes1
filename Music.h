#include <iostream>
#include "Media.h"

class Music: public Media{
 public:
  Music();
  char artist[100];
  char publisher[100];
  char duration[100];
  void setInfo();
  void displayInfo();



};
