#include "Medic.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
namespace pandemic { 

    
 Player& Medic::treat(City c){
    if (board.cubesOfDiseas[c]==0) {
            throw std::invalid_argument("No disease" );}
        board.cubesOfDiseas[c] = 0;
        return *this;
    }
    
    Player& Medic::drive(City c){
        Player::drive(c);
        if(board.getVaccine().count(board.colorCity.at(city))!= 0){
            board.cubesOfDiseas[city] = 0;
        }
        return *this;
    }

    Player& Medic::fly_direct(City c){
        Player::fly_direct(c);
        if(board.getVaccine().count(board.colorCity.at(city)) != 0){
            board.cubesOfDiseas[city] = 0;
        }
        return *this;
    }

    Player& Medic::fly_charter(City c){
        Player::fly_charter(c);
        if(board.getVaccine().count(board.colorCity.at(city)) != 0){
            board.cubesOfDiseas[city] = 0;
        }
        return *this;
    }

    Player& Medic::fly_shuttle(City c){
        Player::fly_shuttle(c);
        if(board.getVaccine().count(board.colorCity.at(city)) != 0){
            board.cubesOfDiseas[city] = 0;
        }
        return *this;
    }
}