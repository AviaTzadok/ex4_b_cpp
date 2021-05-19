#include "Researcher.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
const int num_of_cards = 5;
namespace pandemic { 

 Player& Researcher::discover_cure(Color color){
        int counter = 0;
        for(const auto& m : card){
            if(board.colorCity.at(m) == color){
                counter++;
            }
        }
        if(counter < num_of_cards){throw std::invalid_argument("You need at least 5 cards");}
        set<City> temp;
        for(auto t : card){
            if(board.colorCity.at(t) == color){
                counter++;
                temp.insert(t);
            }
        }
        if(num_of_cards > counter){
            throw std::invalid_argument("no");
        }
        for(const auto& t : temp){
            card.erase(t);
        }
        
        board.Vaccine.insert(color);
        return *this;
    }


}