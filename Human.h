#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player{
private:
    std::string name;
public:
    Human();
    Move* makeMove() override;
    std::string getName( ) override;
};

#endif