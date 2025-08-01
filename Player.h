#ifndef PLAYER_H
#define PLAYER_H

#include<string>


class player {
public:
    virtual char makeMove( ) = 0;
    virtual std::string getName( ) = 0;
    ~player () = default;
};


#endif
