#include "Human.h"
#include<iostream>
#include <string>
using namespace std;


Human :: Human(string Name) {
    name = Name;
};


char Human::makeMove() {
    char move;
    cout<<"Enter move: ";
    cin>>move;
    return move;

};

string Human::getName() {
    return name;

};
