#include "Virologist.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
namespace pandemic { 
 Player& Virologist::treat(City c){
        if(card.count(c)==0 && city !=c){
            throw invalid_argument("no");
        }
        card.erase(c);
        if(board.cubesOfDiseas[c] == 0){
            throw invalid_argument("no");
        }
        if(board.getVaccine().count(board.colorCity.at(city)) != 0){
            board.cubesOfDiseas[c]=0;
            return *this;
        }
        board.cubesOfDiseas[c]--;
        return *this;
    }
}