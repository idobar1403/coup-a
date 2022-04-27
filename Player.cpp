#include <iostream>
#include "Player.hpp"

namespace coup
{
    Player::Player(Game &game, std::string name):game(game),p_name(name),cash(0){
        game.add_player(name);
    }
    int Player::coins(){
        return this->cash;
    }
    std::string Player::role(){
        return this->p_role;
    }
}