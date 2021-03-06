#include <iostream>
#include "Player.hpp"
#include <stdexcept>
namespace coup
{
    Player::Player(Game &game, const std::string &name) : game(game), p_name(name), cash(0) , round_died(-1), action_player(nullptr)
    {
        if(game.get_players_size()>=game.max_players){
            throw std::invalid_argument("reached game size limit");
        }
        game.add_player(name);
        this->place_in_turns = game.get_players_size();
    }
    int Player::coins() const
    {
        return this->cash;
    }
    std::string Player::role() const
    {
        return "none";
    }
    void Player::coup(Player &player)
    {
        // if (!check_if_turn(this->p_name))
        // {
        //     throw std::invalid_argument("not the player turn\n");
        // }
        // if (!this->game.check_in_game(player.p_name))
        // {
        //     throw std::invalid_argument("player already has been eliminated\n");
        // }
        // if (this->cash < this->coup_cost)
        // {
        //     throw std::invalid_argument("player don't have enough money to make coup\n");
        // }
        // this->game.remove_player(player.p_name);
        // player.update_death_round(game.get_round_number());
        // this->decrease_cash(coup_cost);
        // this->game.add_action(this->p_name, "coup");
        // this->action_player = &player;
    }
    void Player::income()
    {
        // if (!check_if_turn(this->p_name))
        // {
        //     throw std::invalid_argument("not the player turn\n");
        // }
        // this->cash += 1;
        // this->game.add_action(this->p_name, "income");
        // this->game.update_turns();
        // this->game.update_rounds();
    }
    void Player::foreign_aid()
    {
        // std::string turn = this->game.turn();
        // if (this->p_name != turn)
        // {
        //     throw std::invalid_argument("not the player turn\n");
        // }
        // this->cash += 2;
        // this->game.add_action(this->p_name, "foreign_aid");
        // this->game.update_turns();
        // this->game.update_rounds();
    }
    void Player::decrease_cash(int amount){
        if(this->cash-amount<0 || amount<0){
            throw std::invalid_argument("can't decrease this amount of cash\n");
        }
        this->cash-=amount;
    }
    void Player::increase_cash(int amount){
        if(amount<0){
            throw std::invalid_argument("can't increase this amount of cash\n");
        }
        this->cash+=amount;
    }
    void Player::update_death_round(int num){
        this->round_died = num;
    }
    bool Player::check_if_turn(const std::string &name) const {
        std::string now_turn = game.turn();
        return name == now_turn;
    }

}