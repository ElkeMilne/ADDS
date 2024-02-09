#include "Referee.h"

Referee::Referee() {}

int Referee::beats(string move_1, string move_2) {
  // If move_2 is in the set of moves that move_1 beats, move_1 wins
  if (move_map[move_1].find(move_2) != move_map[move_1].end()) {
    return 1;
  }
  // If move_1 is in the set of moves that move_2 beats, move_2 wins
  if (move_map[move_2].find(move_1) != move_map[move_2].end()) {
    return 2;
  }
  // If neither move is in the other's set, it's a tie
  return -1;
}

Player* Referee::refGame(Player* player1, Player* player2) {
  Move* move_1 = player1->makeMove();
  Move* move_2 = player2->makeMove();

  int win_state = beats(move_1->getName(), move_2->getName());
  // If the win_state is 1, return a pointer to player1
  // If the win_state is 2, return a pointer to player2
  // Otherwise, return a null pointer
  return win_state == 1 ? player1 : win_state == 2 ? player2 : nullptr;
}
