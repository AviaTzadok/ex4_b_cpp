#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class GeneSplicer:public Player{
        public:
            GeneSplicer(Board& board, City city) : Player(board, city){
                this->role_of="GeneSplicer";}
            Player& discover_cure(Color c) override;
    };
}
