#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"

int main() {
  Player *player1 = new Human("Bob");
  Player *player2 = new Computer();

  Referee referee;
  Player *winner = referee.refGame(player1, player2);

  if (winner == nullptr) {
    std::cout << "Tie game!" << std::endl;
  } else {
    std::cout << "The winner is " << winner->getName() << std::endl;
  }

  return 0;
}
