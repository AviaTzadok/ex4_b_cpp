#include "OperationsExpert.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
namespace pandemic { 
    OperationsExpert& OperationsExpert::build(){
        board.researchStations.insert(city);
        return *this;
    }
}