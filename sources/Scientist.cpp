#include "Scientist.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
namespace pandemic { 
    Player& Scientist::discover_cure(Color color) {
    if(board.getresearchStations().count(city) == 0){
        throw std::invalid_argument("There is no research station in this city");
    }
    int count = 0;
    for(const auto& m : card){
        if(board.colorCity.at(m) == color){
            count++;
        }
    }
    if(count < chance_left){
        throw std::invalid_argument("no");
    }
    count = 1;
    for(auto c = card.begin(); c != card.end(); count++){
        if(board.colorCity.at(*c) == color) {
            c = card.erase(c);
        }
        else {++c;}
    }
    board.Vaccine.insert(color);
    return *this;
}
}