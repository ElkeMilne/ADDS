#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

#include <string>

using namespace std;

class Player {
 public:
  // Returns a pointer to a new Move object
  virtual Move* makeMove() = 0;
  // Returns the name of the player
  virtual string getName() = 0;
};

#endif
