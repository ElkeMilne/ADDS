#include "Player.h"

Move* Player::makeMove() { return new Move("Rock"); }
string Player::getName() { return "Player"; }
