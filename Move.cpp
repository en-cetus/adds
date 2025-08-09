#include <iostream>
#include "Move.h"
#include <string>
using namespace std;

Move::Move(){
    name = "no move is given";
};

string Move::getName(){
    return name;
}

Move::~Move(){

};