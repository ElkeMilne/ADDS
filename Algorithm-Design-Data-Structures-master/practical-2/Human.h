#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
 private:
  string name;

 public:
  Human();
  // Creates a new Human object with the given name
  Human(string name);
  Move* makeMove();
  string getName();
};

#endif
