#include "Human.h"

#include <iostream>

Human::Human() { name = "Human"; }
Human::Human(string name) { this->name = name; }

// This method should prompt the user for a move and return it
Move* Human::makeMove() {
  string move;
  cout << "Enter move: ";
  cin >> move;
  return new Move(move);
}

string Human::getName() { return name; }
