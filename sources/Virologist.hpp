#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class Virologist:public Player{
        public:
    Virologist(Board& board, City city):Player(board,city){
        this->role_of="Virologist";}
            Player& treat(City c);
    };

}
