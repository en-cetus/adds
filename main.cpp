#include <iostream>
#include <string>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(){
Human human("Mei");
computer Computer;
Referee referee;

player* winner = referee.refereeGame(&human, &Computer);

if (winner == nullptr) {
    std::cout << "It's a Tie" << std::endl;
} else {
    std::cout << winner->getName() << " Wins" << std::endl;
}

return 0;
}
