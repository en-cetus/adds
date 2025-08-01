#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"

class Referee {
public:
    Referee (){};
    Player* refereeGame(Player* Player_1, Player* Player_2);
};

#endif