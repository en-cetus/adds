#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public player{
private:
    std::string name;
public:
    Human(std::string Name =  "Human");
    char makeMove() override;
    std::string getName( ) override;
};

#endif