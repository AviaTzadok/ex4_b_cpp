#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <map>
#include <set>
#include <iostream>

using namespace std;
namespace pandemic {
    class Board {


        public:
            std::map<City, map<City, bool>> map;
            std::map<City, Color> colorCity;
            std::map<City, int> cubesOfDiseas;
            set<City> researchStations;
            set<Color> Vaccine;
            Board();
            int& operator[](City c);
            friend std::ostream& operator<< (std::ostream& output, const Board& c);
            friend std::istream& operator>> (std::istream& input , Board& c);            
            void remove_cures();
            bool is_clean();
            void remove_stations();
            set<City>& getresearchStations();
            set<Color>& getVaccine();

    };
}