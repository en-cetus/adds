#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class computer : public player {
public:
    char makeMove() override;
    std::string getName( ) override;
};


#endif