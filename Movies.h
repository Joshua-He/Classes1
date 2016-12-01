#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;

class Movies: public Media{
 public:
  Movies();
  char director[100];
  char duration[100];
  char rating[100];
  void setInfo();
  void displayInfo();
}

