#include <iostream>
#include "Player.hpp"

namespace coup{
    class Captain:public Player{
        public:
            Captain(Game &game, std::string);
            void steal(Player &player);
            void block(Player &player);
            std::string role() override;
    };
}