#include <iostream>
#include "Ambassador.hpp"

namespace coup{
    Ambassador::Ambassador(Game &game,const std::string &name):Player(game,name){
        this->p_role="Ambassadoe";
    }
    void Ambassador::transfer(Player &player1, Player &player2){

    }
    void Ambassador::block(Player &p){

    }
    std::string Ambassador::role() const {
        return this->p_role;
    }
}