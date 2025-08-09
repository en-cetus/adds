#ifndef MOVE_H_
#define MOVE_H_
#include <iostream>
#include <string>
using namespace std;

class Move{
protected:
    string name;

public:
    Move();
    string getName();
    ~Move();

};


#endif