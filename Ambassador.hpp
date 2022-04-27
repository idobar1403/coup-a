#include <iostream>
#include "Player.hpp"

namespace coup{
    class Ambassador: public Player{
        public:
            Ambassador(Game &game, std::string name);
            void transfer(Player &player1, Player &player2);
            void block(Player &player);
            std::string role() override;
    };
}