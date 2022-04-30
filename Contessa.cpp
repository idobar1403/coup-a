#include <iostream>
#include "Contessa.hpp"

namespace coup
{
    Contessa::Contessa(Game &game, const std::string &name) : Player(game, name)
    {
        this->p_role = "Contessa";
    }
    void Contessa::block(Player &p)
    {
    }
    std::string Contessa::role() const
    {
        return this->p_role;
    }
}