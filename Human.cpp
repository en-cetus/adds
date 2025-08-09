#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Scissor.h"
#include "Rock.h"
#include "Paper.h"
#include "Move.h"

using namespace std;

Human::Human(){
};

Human::Human(std::string name) : name(name) {}

string Human::getName(){
    return name;
};

Move* Human::makeMove(){
	string input;
    Move* move = nullptr;
    cout << "Enter Move: ";
    cin >> input;

    if (input == "Robot") {
        move = new Robot();
    } else if (input == "Ninja") {
        move = new Ninja();
    } else if (input == "Monkey") {
        move = new Monkey();
    } else if (input == "Pirate") {
        move = new Pirate();
    } else if (input == "Zombie") {
        move = new Zombie();
    } else if (input == "Scissor") {
        move = new Scissor();
    } else if (input == "Rock") {
        move = new Rock();
    } else if (input == "Paper") {
        move = new Paper();
    } else {
        cout << "invalid input" << endl;
        move = nullptr;
    }

    return move;
	
}