#include <iostream>
#include "Duke.hpp"

namespace coup
{
    Duke::Duke(Game &game, const std::string &name) : Player(game, name)
    {
        this->p_role = "Duke";
    }
    void Duke::block(Player &p)
    {
    }
    void Duke::tax()
    {
    }
    std::string Duke::role() const
    {
        return this->p_role;
    }

}