#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include <vector>

#pragma once

namespace coup{
    class Game{
        protected:
            std::vector<std::string> players_in_game;
        public:
            Game();
            std::string turn();
            std::vector<std::string> players();
            std::vector<std::string> player_turn();
            std::vector<std::string> last_action();
            void add_player(std::string name);
    };
}
#endif
