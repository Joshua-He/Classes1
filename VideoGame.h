#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;

class VideoGame: public Media{
 public:
  VideoGame();
  ~VideoGame();
  char publisher[100];
  char rating[100];
  void setInfo();
  void displayInfo();
};
