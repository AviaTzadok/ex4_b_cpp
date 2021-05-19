#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic{
    class Dispatcher: public Player {
        public:
        Dispatcher(Board& board, City city):Player(board,city){
             this->role_of="Dispatcher";}
        Player &fly_direct(City city) override;
 
    };
}