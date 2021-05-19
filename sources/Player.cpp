#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>

using namespace std;
const int num_of_cards = 5;

namespace pandemic{

    Player& Player::drive(City c){
        if(city == c){throw invalid_argument("It is not possible to travel within the country you are currently in");}
        if(board.map[city][c]){
            city = c; 
        }
        else { 
            throw "not neighbors";
        }
        return *this;
    }
    Player& Player::fly_direct(City c){
        if(city == c){
            throw invalid_argument("It is not possible to travel within the country you are currently in");
        }
        if(card.count(c) == 0){
            throw invalid_argument("You do not have a ticket to this country");
        }
        card.erase(c);
        city = c; 
        return *this;
    }

    Player& Player::fly_charter(City c){
        if(card.count(city) == 0){
            throw invalid_argument("There is no connection between the countries");
        }
        if(city ==c){throw invalid_argument("It is not possible to travel within the country you are currently in");}
        card.erase(city);
        city =c;
        return *this;
    }

    Player& Player::fly_shuttle(City c){
        if (board.researchStations.count(city) == 0){
        throw invalid_argument(" dont have a research station");}
        if (board.researchStations.count(c) == 0){
        throw invalid_argument(" dont have a research station");}
        if(city==c){throw invalid_argument("It is not possible to travel within the country you are currently in");}
        city=c;
        return *this;
    }

    Player& Player::build(){
        if(card.count(this->city) == 0){throw invalid_argument("You don't have a card of this country ");}
        if(board.researchStations.count(this->city)!=0){return *this;}
        board.researchStations.insert(this->city);
        card.erase(this->city);
        return *this;
    }
    
    Player& Player::discover_cure(Color color){
        if(board.researchStations.count(city) == 0){
            throw std::invalid_argument("There is not a research station in this country ");}
        int counter = 0;
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

    Player& Player::treat(City c){
        if(city != c){
            throw invalid_argument("You are not in this city ");
        }
        if(board.cubesOfDiseas[c] == 0){
            throw invalid_argument(" no have disease cubes in this city");
        }
        if(board.Vaccine.count(board.colorCity.at(c)) != 0){
            board.cubesOfDiseas[c] = 0;
        }
        else{board.cubesOfDiseas[c]--;}
        return *this;
    }

    Player& Player::take_card(City city){
        if(card.count(city)==0){card.insert(city);}
        return *this;
    }

    void Player::remove_cards(){
        card.clear();
    }
    std::string Player::role(){
        return role_of;
    }

}