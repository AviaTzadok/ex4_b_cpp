#include "Dispatcher.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
namespace pandemic { 
    Player& Dispatcher::fly_direct(City c){

        if (city == c)
        {
            throw invalid_argument("same city");
 
        }

        if(board.researchStations.count(city)!=0){
            city = c;
            return *this;
        }
 
        if (card.count(c) != 0)
        {
                city = c;
                card.erase(c);
        }
        else
        {
                throw invalid_argument("Not in the cards!");
        }
        return *this;
    }
}
