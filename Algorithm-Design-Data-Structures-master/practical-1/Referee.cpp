#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
  char move_1 = player1->makeMove();
  char move_2 = player2->makeMove();

  if ((move_1 == 'R' && move_2 == 'S') || (move_1 == 'S' && move_2 == 'P') ||
      (move_1 == 'P' && move_2 == 'R')) {
    return player1;
  }
  if ((move_2 == 'R' && move_1 == 'S') || (move_2 == 'S' && move_1 == 'P') ||
      (move_2 == 'P' && move_1 == 'R')) {
    return player2;
  }

  return nullptr;
}
