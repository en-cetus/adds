#include "Computer.h"
#include "Rock.h"
using namespace std;

Move* Computer::makeMove() {
    Rock* rock = new Rock(); ;
    return rock;
};

string Computer::getName(){
    return "Computer";
};