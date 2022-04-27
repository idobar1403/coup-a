#include <iostream>
#include <vector>
#include "Game.hpp"

#pragma once

namespace coup
{
  class Player{
        protected:
            int cash;
            std::string p_name;
            std::string p_role;
            Game &game;
            void increase_cash();
            void decrease_cash();
        public:
            Player(Game &game, std::string name);
            int coins();
            virtual void coup(Player &p);
            void income();
            void foreign_aid();
            virtual std::string role();

  };  
} 
