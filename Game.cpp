#include <iostream>
#include "Game.hpp"

namespace coup
{
    Game::Game(){};
    void Game::add_player(std::string name){
        this->players_in_game.push_back(name);
    }
} 
