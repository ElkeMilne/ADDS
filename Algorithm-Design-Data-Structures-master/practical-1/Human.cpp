#include "Human.h"

#include <iostream>

Human::Human() { name = "Human"; }

Human::Human(string name) { this->name = name; }

char Human::makeMove() {
  char move;
  cout << "Enter move:";
  cin >> move;
  return move;
}

string Human::getName() { return name; }
