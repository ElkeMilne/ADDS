#include "Computer.h"

// The computer will always play rock
Move* Computer::makeMove() { return new Move("Rock"); }
// The computer's name is always "Computer"
string Computer::getName() { return "Computer"; }
