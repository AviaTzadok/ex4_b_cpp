#include "FieldDoctor.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic{
    Player& FieldDoctor::treat(City c){
        if ((c == city || board.map[city][c]) && board[c] > 0)
        {
            if (board.Vaccine.count(board.colorCity[c])!=0){
                board[c] = 0;
            }
            else{board[c]--;}
            return *this;
        }
        throw invalid_argument("illegal");
    }
}