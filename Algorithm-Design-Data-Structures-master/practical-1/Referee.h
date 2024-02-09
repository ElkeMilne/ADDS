#ifndef REFEREE_H
#define REFEREE_H

#include "Computer.h"
#include "Human.h"

class Referee {
 public:
  Referee();  // constructor
  Player* refGame(
      Player* player1,
      Player* player2);  // returns the reference to the winning player
};

#endif
