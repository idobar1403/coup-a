#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Contessa.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Duke.hpp"
#include <iostream>
#include <string>
using namespace coup;
TEST_CASE("Good Writing and reading tests")
{
    CHECK_NOTHROW(Game g1{});
}