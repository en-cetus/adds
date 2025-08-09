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

Move* Human::makeMove(){
	string input;
	Move* move;
	cout<<"Enter Move: ";
	cin >> input;

	if(input =="Robot"){
		Robot* robot;
		move = robot;
	}else if (input == "Ninja"){
		Ninja* ninja;
		move = ninja;
	}else if (input == "Monkey"){
		Monkey* monkey;
		move = monkey;
	}else if (input == "Pirate"){
		Pirate* pirate;
		move = pirate;
	}else if (input == "Zombie"){
		Zombie* zombie;
		move = zombie;
	}else if(input == "Scissor"){
        Scissor* scissor;
        move = scissor;
    }else if(input == "Rock"){
        Rock* Rock;
        move = Rock;
    }else if(input == "Paper"){
        Paper* paper;
        move = paper;
    }else{
		cout << "invalid input" << endl;
	}
	return move;
	
}