#ifndef REFEREE_H
#define REFEREE_H

#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "Computer.h"
#include "Human.h"

class Referee {
 private:
  // Store which moves each move beats in a hashset accessed by the move name in
  // a hashmap for O(1) time access. I comtemplated using a separate class for
  // this to better adhere to the SOLID principles, but I deemed it the
  // responsiblity of the referee to know the rules.
  unordered_map<string, unordered_set<string>> move_map = {
      {"Rock", {"Scissors"}},          {"Paper", {"Rock"}},
      {"Scissors", {"Paper"}},         {"Monkey", {"Ninja", "Robot"}},
      {"Robot", {"Ninja", "Zombie"}},  {"Pirate", {"Robot", "Monkey"}},
      {"Ninja", {"Pirate", "Zombie"}}, {"Zombie", {"Pirate", "Monkey"}}};
  // Returns 1 if move_1 beats move_2, 2 if move_2 beats move_1, 0 if tie
  int beats(string move_1, string move_2);

 public:
  // Constructor
  Referee();
  // Returns the reference to the winning player
  Player* refGame(Player* player1, Player* player2);
};

#endif
