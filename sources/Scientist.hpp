#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 


    class Scientist:public Player{
        public:
            int chance_left;
            Scientist(Board& board, City city,int n):Player(board, city){
                this->role_of="Scientist";
                this->chance_left=n;
            }
            Player& discover_cure(Color color);

        
    };

}