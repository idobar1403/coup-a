#include <iostream>
#include "Assassin.hpp"

namespace coup
{
    Assassin::Assassin(Game &game, const std::string &name) : Player(game, name)
    {
        this->p_role = "Assassin";
        this->coup_cost = 3;
    }
    void Assassin::coup(Player &p)
    {
    }
    std::string Assassin::role() const
    {
        return this->p_role;
    }
}