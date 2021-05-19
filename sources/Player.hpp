#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <iostream>
#include <set>

namespace pandemic {
    class Player {
        protected:
            set<City> card;
            Board& board;
            City city;
            std::string role_of;
        public:
            Player(Board& board, City city):board(board),city(city){}
            Player(Board& board, City city,int num):board(board),city(city){}
            virtual Player& drive(City city);
            virtual Player& fly_charter(City city);
            virtual Player& fly_direct(City city);
            virtual Player& fly_shuttle(City city);
            virtual Player& treat(City city);
            Player& take_card(City city); 
            virtual void remove_cards();
            virtual std::string role(); 
            virtual Player& discover_cure(Color color); 
            virtual  Player& build();
    };
}
