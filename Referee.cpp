#include "Referee.h"

 player* Referee :: refereeGame(player* Player_1, player* Player_2) {
    char move1 = Player_1->makeMove();
    char move2 = Player_2->makeMove();
    if (move1 == move2)
        return nullptr;

    if ((move1 == 'R' && move2 == 'S') ||
        (move1 == 'S' && move2 == 'P') ||
        (move1 == 'P' && move2 == 'R')) {
        return Player_1;
    } else {
        return Player_2;
    }
}