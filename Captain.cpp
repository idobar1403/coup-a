#include <iostream>
#include "Captain.hpp"

namespace coup
{
    Captain::Captain(Game &game, const std::string &name) : Player(game, name)
    {
        this->p_role = "Captain";
    }
    void Captain::steal(Player &p)
    {
    }
    void Captain::block(Player &p)
    {
    }
    std::string Captain::role() const
    {
        return this->p_role;
    }
}