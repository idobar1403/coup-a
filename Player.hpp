#include <iostream>
#include <vector>
#include "Game.hpp"
#include <stdexcept>

#pragma once

namespace coup
{
  class Player
  {
  protected:
    int cash;
    std::string p_name;
    std::string p_role;
    Game &game;
    void increase_cash(int amount);
    void decrease_cash(int amount);
    Player *action_player;
    int round_died;
    int place_in_turns;
  public:
    Player(Game &game, const std::string &name);
    int coins() const;
    virtual void coup(Player &p);
    void income();
    void foreign_aid();
    virtual std::string role() const;
    void update_death_round(int num);
    bool check_if_turn(const std::string &name) const;
    int coup_cost = 7;
  };
}
