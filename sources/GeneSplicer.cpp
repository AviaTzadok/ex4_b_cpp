#include "GeneSplicer.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <map>
#include <string>
using namespace std; 
const int num_of_cards = 5;
namespace pandemic { 
            Player& GeneSplicer::discover_cure(Color c){
                if(board.researchStations.count(this->city)==0){throw "there is no station";}
                if(board.Vaccine.count(c)!=0){return *this;}
                int count=0;
                set<City> temp;
                for(const auto& t : this->card){
                    if(count<num_of_cards){
                    count++;
                      temp.insert(t);
                    }
                    else{break;}
                }
                if(count<num_of_cards){throw "there is no cards";}

                for(const auto &t : temp){
                    card.erase(t);
                }
                board.Vaccine.insert(c);
                return *this;

            }

}