  
#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    
    class Researcher:public Player{
        public:
            Researcher(Board& board, City city):Player(board,city){this->role_of="Researcher";}

            Player& discover_cure(Color color)override;
    };

}