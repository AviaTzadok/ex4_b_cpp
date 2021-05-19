#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>

namespace pandemic { 
      class FieldDoctor: public Player {
        public:
        FieldDoctor(Board& board, City city):Player(board,city){this->role_of="FieldDoctor";}
        Player &treat(City c) override;
    };
}