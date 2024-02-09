#ifndef MOVE_H
#define MOVE_H

#include <string>

using namespace std;

class Move {
 private:
  string name;

 public:
  // Creates a new Move object with the given name
  Move(string name);
  // Returns the name of the move
  string getName();
};

#endif
