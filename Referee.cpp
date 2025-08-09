#include <iostream>
#include "Move.h"
#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;


Player* Referee::refGame(Player*a, Player *b){
	Move* move_a;
	Move* move_b;
	
	string a_name, b_name;
	move_a = a->makeMove();
	move_b = b->makeMove();
	a_name = move_a->getName();
	b_name = move_b->getName();
	//cout << a->getName() << " has move: " << a_name << endl;
	//cout << b->getName() << " has move: " << b_name << endl;


	if (a_name.compare(b_name) == 0){
		return nullptr;
	}else if((a_name.compare("Monkey") == 0 && (b_name.compare("Robot") || b_name.compare("Zombie"))) ||
               (a_name.compare("Robot") == 0 && (b_name.compare("Pirate") || b_name.compare("Ninja"))) ||
               (a_name.compare("Pirate") == 0 && (b_name.compare("Zombie") || b_name.compare("Monkey"))) ||
               (a_name.compare("Ninja") == 0 && (b_name.compare("Monkey") || b_name.compare("Pirate"))) ||
               (a_name.compare("Zombie") == 0 && (b_name.compare("Ninja") || b_name.compare("Robot"))) )
               {
				return a;
	}else if( (a_name == "Rock" && b_name == "Scissor") ||
               (a_name == "Scissor" && b_name == "Paper") ||
               (a_name == "Paper" && b_name == "Rock")) 
               {
                return a;
    }else{
		return b;
	}
};
