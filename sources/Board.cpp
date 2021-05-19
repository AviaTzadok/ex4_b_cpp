  
#include "City.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
#include <map>

using namespace std;
namespace pandemic
{
    

Board::Board(){
//Algiers Black Madrid Paris Istanbul Cairo
        map[City::Algiers][City::Madrid] = true;//Algiers
        map[City::Algiers][City::Paris] = true;//Algiers
        map[City::Algiers][City::Istanbul] = true;//Algiers
        map[City::Algiers][City::Cairo] = true;//Algiers

        //Atlanta Blue Chicago Miami Washington
        map[City::Atlanta][City::Chicago] = true;//Atlanta
        map[City::Atlanta][City::Miami] = true;//Atlanta
        map[City::Atlanta][City::Washington] = true;//Atlanta

//Baghdad Black Tehran Istanbul Cairo Riyadh Karachi
        map[City::Baghdad][City::Tehran] = true;//Baghdad
        map[City::Baghdad][City::Istanbul] = true;//Baghdad
        map[City::Baghdad][City::Cairo] = true;//Baghdad
        map[City::Baghdad][City::Riyadh] = true;//Baghdad
        map[City::Baghdad][City::Karachi] = true;//Baghdad

//Bangkok Red Kolkata Chennai Jakarta HoChiMinhCity HongKong
        map[City::Bangkok][City::Kolkata] = true;//Bangkok
        map[City::Bangkok][City::Chennai] = true;//Bangkok
        map[City::Bangkok][City::Jakarta] = true;//Bangkok
        map[City::Bangkok][City::HoChiMinhCity] = true;//Bangkok
        map[City::Bangkok][City::HongKong] = true;//Bangkok

//Beijing Red Shanghai Seoul
        map[City::Beijing][City::Shanghai] = true;//Beijing
        map[City::Beijing][City::Seoul] = true;//Beijing

//Bogota Yellow MexicoCity Lima Miami SaoPaulo BuenosAires
        map[City::Bogota][City::MexicoCity] = true;//Bogota
        map[City::Bogota][City::Lima] = true;//Bogota
        map[City::Bogota][City::Miami] = true;//Bogota
        map[City::Bogota][City::SaoPaulo] = true;//Bogota
        map[City::Bogota][City::BuenosAires] = true;//Bogota

//BuenosAires Yellow Bogota SaoPaulo
        map[City::BuenosAires][City::Bogota] = true;//BuenosAires
        map[City::BuenosAires][City::SaoPaulo] = true;//BuenosAires

//Cairo Black Algiers Istanbul Baghdad Khartoum Riyadh
        map[City::Cairo][City::Algiers] = true;//Cairo
        map[City::Cairo][City::Istanbul] = true;//Cairo
        map[City::Cairo][City::Baghdad] = true;//Cairo
        map[City::Cairo][City::Khartoum] = true;//Cairo
        map[City::Cairo][City::Riyadh] = true;//Cairo

//Chennai Black Mumbai Delhi Kolkata Bangkok Jakarta
        map[City::Chennai][City::Mumbai] = true;//Chennai
        map[City::Chennai][City::Delhi] = true;//Chennai
        map[City::Chennai][City::Kolkata] = true;//Chennai
        map[City::Chennai][City::Bangkok] = true;//Chennai
        map[City::Chennai][City::Jakarta] = true;//Chennai

//Chicago Blue SanFrancisco LosAngeles MexicoCity Atlanta Montreal
        map[City::Chicago][City::SanFrancisco] = true;//Chicago
        map[City::Chicago][City::LosAngeles] = true;//Chicago
        map[City::Chicago][City::MexicoCity] = true;//Chicago
        map[City::Chicago][City::Atlanta] = true;//Chicago
        map[City::Chicago][City::Montreal] = true;//Chicago

//Delhi Black Tehran Karachi Mumbai Chennai Kolkata
        map[City::Delhi][City::Tehran] = true;//Delhi
        map[City::Delhi][City::Karachi] = true;//Delhi
        map[City::Delhi][City::Mumbai] = true;//Delhi
        map[City::Delhi][City::Chennai] = true;//Delhi
        map[City::Delhi][City::Kolkata] = true;//Delhi

//Essen Blue London Paris Milan StPetersburg
        map[City::Essen][City::London] = true;//Essen
        map[City::Essen][City::Paris] = true;//Essen
        map[City::Essen][City::Milan] = true;//Essen
        map[City::Essen][City::StPetersburg] = true;//Essen

//HoChiMinhCity Red Jakarta Bangkok HongKong Manila
        map[City::HoChiMinhCity][City::Jakarta] = true;//HoChiMinhCity
        map[City::HoChiMinhCity][City::Bangkok] = true;//HoChiMinhCity
        map[City::HoChiMinhCity][City::HongKong] = true;//HoChiMinhCity
        map[City::HoChiMinhCity][City::Manila] = true;//HoChiMinhCity

//HongKong Red Bangkok Kolkata HoChiMinhCity Shanghai Manila Taipei
        map[City::HongKong][City::Bangkok] = true;//HongKong
        map[City::HongKong][City::Kolkata] = true;//HongKong
        map[City::HongKong][City::HoChiMinhCity] = true;//HongKong
        map[City::HongKong][City::Shanghai] = true;//HongKong
        map[City::HongKong][City::Manila] = true;//HongKong
        map[City::HongKong][City::Taipei] = true;//HongKong

//Istanbul Black Milan Algiers StPetersburg Cairo Baghdad Moscow
        map[City::Istanbul][City::Milan] = true;//Istanbul
        map[City::Istanbul][City::Algiers] = true;//Istanbul
        map[City::Istanbul][City::StPetersburg] = true;//Istanbul
        map[City::Istanbul][City::Cairo] = true;//Istanbul
        map[City::Istanbul][City::Baghdad] = true;//Istanbul
        map[City::Istanbul][City::Moscow] = true;//Istanbul

//Jakarta Red Chennai Bangkok HoChiMinhCity Sydney
        map[City::Jakarta][City::Chennai] = true;//Jakarta
        map[City::Jakarta][City::Bangkok] = true;//Jakarta
        map[City::Jakarta][City::HoChiMinhCity] = true;//Jakarta
        map[City::Jakarta][City::Sydney] = true;//Jakarta

//Johannesburg Yellow Kinshasa Khartoum
        map[City::Johannesburg][City::Kinshasa] = true;//Johannesburg
        map[City::Johannesburg][City::Khartoum] = true;//Johannesburg

//Karachi Black Tehran Baghdad Riyadh Mumbai Delhi
        map[City::Karachi][City::Tehran] = true;//Karachi
        map[City::Karachi][City::Baghdad] = true;//Karachi
        map[City::Karachi][City::Riyadh] = true;//Karachi
        map[City::Karachi][City::Mumbai] = true;//Karachi
        map[City::Karachi][City::Delhi] = true;//Karachi

//Khartoum Yellow Cairo Lagos Kinshasa Johannesburg
        map[City::Khartoum][City::Cairo] = true;//Khartoum
        map[City::Khartoum][City::Lagos] = true;//Khartoum
        map[City::Khartoum][City::Kinshasa] = true;//Khartoum
        map[City::Khartoum][City::Johannesburg] = true;//Khartoum

//Kinshasa Yellow Lagos Khartoum Johannesburg
        map[City::Kinshasa][City::Lagos] = true;//Kinshasa
        map[City::Kinshasa][City::Khartoum] = true;//Kinshasa
        map[City::Kinshasa][City::Johannesburg] = true;//Kinshasa

//Kolkata Black Delhi Chennai Bangkok HongKong
        map[City::Kolkata][City::Delhi] = true;//Kolkata
        map[City::Kolkata][City::Chennai] = true;//Kolkata
        map[City::Kolkata][City::Bangkok] = true;//Kolkata
        map[City::Kolkata][City::HongKong] = true;//Kolkata

//Lagos Yellow SaoPaulo Khartoum Kinshasa
        map[City::Lagos][City::SaoPaulo] = true;//Lagos
        map[City::Lagos][City::Khartoum] = true;//Lagos
        map[City::Lagos][City::Kinshasa] = true;//Lagos


//Lima Yellow MexicoCity Bogota Santiago
        map[City::Lima][City::MexicoCity] = true;//Lima
        map[City::Lima][City::Bogota] = true;//Lima
        map[City::Lima][City::Santiago] = true;//Lima

//London Blue NewYork Madrid Essen Paris
        map[City::London][City::NewYork] = true;//London
        map[City::London][City::Madrid] = true;//London
        map[City::London][City::Essen] = true;//London
        map[City::London][City::Paris] = true;//London

//LosAngeles Yellow SanFrancisco Chicago MexicoCity Sydney
        map[City::LosAngeles][City::SanFrancisco] = true;//LosAngeles
        map[City::LosAngeles][City::Chicago] = true;//LosAngeles
        map[City::LosAngeles][City::MexicoCity] = true;//LosAngeles
        map[City::LosAngeles][City::Sydney] = true;//LosAngeles

//Madrid Blue London NewYork Paris SaoPaulo Algiers
        map[City::Madrid][City::London] = true;//Madrid
        map[City::Madrid][City::NewYork] = true;//Madrid
        map[City::Madrid][City::Paris] = true;//Madrid
        map[City::Madrid][City::SaoPaulo] = true;//Madrid
        map[City::Madrid][City::Algiers] = true;//Madrid

//Manila Red Taipei SanFrancisco HoChiMinhCity Sydney HongKong
        map[City::Manila][City::Taipei] = true;//Manila
        map[City::Manila][City::SanFrancisco] = true;//Manila
        map[City::Manila][City::HoChiMinhCity] = true;//Manila
        map[City::Manila][City::Sydney] = true;//Manila
        map[City::Manila][City::HongKong] = true;//Manila

//MexicoCity Yellow LosAngeles Chicago Miami Lima Bogota
        map[City::MexicoCity][City::LosAngeles] = true;//MexicoCity
        map[City::MexicoCity][City::Chicago] = true;//MexicoCity
        map[City::MexicoCity][City::Miami] = true;//MexicoCity
        map[City::MexicoCity][City::Lima] = true;//MexicoCity
        map[City::MexicoCity][City::Bogota] = true;//MexicoCity

//Miami Yellow Atlanta MexicoCity Washington Bogota
        map[City::Miami][City::Atlanta] = true;//Miami
        map[City::Miami][City::MexicoCity] = true;//Miami
        map[City::Miami][City::Washington] = true;//Miami
        map[City::Miami][City::Bogota] = true;//Miami

//Milan Blue Essen Paris Istanbul
        map[City::Milan][City::Essen] = true;//Milan
        map[City::Milan][City::Paris] = true;//Milan
        map[City::Milan][City::Istanbul] = true;//Milan

//Montreal Blue Chicago Washington NewYork
        map[City::Montreal][City::Chicago] = true;//Montreal
        map[City::Montreal][City::Washington] = true;//Montreal
        map[City::Montreal][City::NewYork] = true;//Montreal

//Moscow Black StPetersburg Istanbul Tehran
        map[City::Moscow][City::StPetersburg] = true;//Moscow
        map[City::Moscow][City::Istanbul] = true;//Moscow
        map[City::Moscow][City::Tehran] = true;//Moscow

//Mumbai Black Karachi Delhi Chennai
        map[City::Mumbai][City::Karachi] = true;//Mumbai
        map[City::Mumbai][City::Delhi] = true;//Mumbai
        map[City::Mumbai][City::Chennai] = true;//Mumbai

//NewYork Blue Montreal Washington London Madrid
        map[City::NewYork][City::Montreal] = true;//NewYork
        map[City::NewYork][City::Washington] = true;//NewYork
        map[City::NewYork][City::London] = true;//NewYork
        map[City::NewYork][City::Madrid] = true;//NewYork

//Osaka Red Taipei Tokyo
        map[City::Osaka][City::Taipei] = true;//Osaka
        map[City::Osaka][City::Tokyo] = true;//Osaka

//Paris Blue Algiers Essen Madrid Milan London
        map[City::Paris][City::Algiers] = true;//Paris
        map[City::Paris][City::Essen] = true;//Paris
        map[City::Paris][City::Madrid] = true;//Paris
        map[City::Paris][City::Milan] = true;//Paris
        map[City::Paris][City::London] = true;//Paris

//Riyadh Black Baghdad Cairo Karachi
        map[City::Riyadh][City::Baghdad] = true;//Riyadh
        map[City::Riyadh][City::Cairo] = true;//Riyadh
        map[City::Riyadh][City::Karachi] = true;//Riyadh

//SanFrancisco Blue LosAngeles Chicago Tokyo Manila
        map[City::SanFrancisco][City::LosAngeles] = true;//SanFrancisco
        map[City::SanFrancisco][City::Chicago] = true;//SanFrancisco
        map[City::SanFrancisco][City::Tokyo] = true;//SanFrancisco
        map[City::SanFrancisco][City::Manila] = true;//SanFrancisco

//Santiago Yellow Lima
        map[City::Santiago][City::Lima] = true;//Santiago

//SaoPaulo Yellow Bogota BuenosAires Lagos Madrid
        map[City::SaoPaulo][City::Bogota] = true;//SaoPaulo
        map[City::SaoPaulo][City::BuenosAires] = true;//SaoPaulo
        map[City::SaoPaulo][City::Lagos] = true;//SaoPaulo
        map[City::SaoPaulo][City::Madrid] = true;//SaoPaulo

//Seoul Red Beijing Shanghai Tokyo
        map[City::Seoul][City::Beijing] = true;//Seoul
        map[City::Seoul][City::Shanghai] = true;//Seoul
        map[City::Seoul][City::Tokyo] = true;//Seoul

//Shanghai Red Beijing HongKong Taipei Seoul Tokyo
        map[City::Shanghai][City::Beijing] = true;//Shanghai
        map[City::Shanghai][City::HongKong] = true;//Shanghai
        map[City::Shanghai][City::Taipei] = true;//Shanghai
        map[City::Shanghai][City::Seoul] = true;//Shanghai
        map[City::Shanghai][City::Tokyo] = true;//Shanghai

//StPetersburg Blue Essen Istanbul Moscow
        map[City::StPetersburg][City::Essen] = true;//StPetersburg
        map[City::StPetersburg][City::Istanbul] = true;//StPetersburg
        map[City::StPetersburg][City::Moscow] = true;//StPetersburg

//Sydney Red Jakarta Manila LosAngeles
        map[City::Sydney][City::Jakarta] = true;//Sydney
        map[City::Sydney][City::Manila] = true;//Sydney
        map[City::Sydney][City::LosAngeles] = true;//Sydney

//Taipei Red Shanghai HongKong Osaka Manila
        map[City::Taipei][City::Shanghai] = true;//Taipei
        map[City::Taipei][City::HongKong] = true;//Taipei
        map[City::Taipei][City::Osaka] = true;//Taipei
        map[City::Taipei][City::Manila] = true;//Taipei

//Tehran Black Baghdad Moscow Karachi Delhi
        map[City::Tehran][City::Baghdad] = true;//Tehran
        map[City::Tehran][City::Moscow] = true;//Tehran
        map[City::Tehran][City::Karachi] = true;//Tehran
        map[City::Tehran][City::Delhi] = true;//Tehran

//Tokyo Red Seoul Shanghai Osaka SanFrancisco
        map[City::Tokyo][City::Seoul] = true;//Tokyo
        map[City::Tokyo][City::Shanghai] = true;//Tokyo
        map[City::Tokyo][City::Osaka] = true;//Tokyo
        map[City::Tokyo][City::SanFrancisco] = true;//Tokyo

//Washington Blue Atlanta NewYork Montreal Miami
        map[City::Washington][City::Atlanta] = true;//Washington
        map[City::Washington][City::NewYork] = true;//Washington
        map[City::Washington][City::Montreal] = true;//Washington
        map[City::Washington][City::Miami] = true;//Washington



        
        colorCity[City::Algiers]=Color::Black;
        colorCity[City::Atlanta]=Color::Blue;
        colorCity[City::Baghdad]=Color::Black;
        colorCity[City::Bangkok]=Color::Red;
        colorCity[City::Beijing]=Color::Red;
        colorCity[City::Bogota]=Color::Yellow;
        colorCity[City::BuenosAires]=Color::Yellow;
        colorCity[City::Cairo]=Color::Black;
        colorCity[City::Chennai]=Color::Black;
        colorCity[City::Chicago]=Color::Blue;
        colorCity[City::Delhi]=Color::Black;
        colorCity[City::Essen]=Color::Blue;
        colorCity[City::HoChiMinhCity]=Color::Red;
        colorCity[City::HongKong]=Color::Red;
        colorCity[City::Istanbul]=Color::Black;
        colorCity[City::Jakarta]=Color::Red;
        colorCity[City::Johannesburg]=Color::Yellow;
        colorCity[City::Karachi]=Color::Black;
        colorCity[City::Khartoum]=Color::Yellow;
        colorCity[City::Kinshasa]=Color::Yellow;
        colorCity[City::Kolkata]=Color::Black;
        colorCity[City::Lagos]=Color::Yellow;
        colorCity[City::Lima]=Color::Yellow;
        colorCity[City::London]=Color::Blue;
        colorCity[City::LosAngeles]=Color::Yellow;
        colorCity[City::Madrid]=Color::Blue;
        colorCity[City::Manila]=Color::Red;
        colorCity[City::MexicoCity]=Color::Yellow;
        colorCity[City::Miami]=Color::Yellow;
        colorCity[City::Milan]=Color::Blue;
        colorCity[City::Montreal]=Color::Blue;
        colorCity[City::Moscow]=Color::Black;
        colorCity[City::Mumbai]=Color::Black;
        colorCity[City::NewYork]=Color::Blue;
        colorCity[City::Osaka]=Color::Red;
        colorCity[City::Paris]=Color::Blue;
        colorCity[City::Riyadh]=Color::Black;
        colorCity[City::SanFrancisco]=Color::Blue;
        colorCity[City::Santiago]=Color::Yellow;
        colorCity[City::SaoPaulo]=Color::Yellow;
        colorCity[City::Seoul]=Color::Red;
        colorCity[City::Shanghai]=Color::Red;
        colorCity[City::StPetersburg]=Color::Blue;
        colorCity[City::Sydney]=Color::Red;
        colorCity[City::Taipei]=Color::Red;
        colorCity[City::Tehran]=Color::Black;
        colorCity[City::Tokyo]=Color::Red;
        colorCity[City::Washington]=Color::Blue;

}
        int& Board::operator[](City c){
                return cubesOfDiseas[c];
        }
        void Board::remove_cures(){
                Vaccine.clear();
        }
        void Board::remove_stations(){

        }
        set<City>& Board::getresearchStations(){
                return researchStations;
        }
        set<Color>& Board::getVaccine(){
                return Vaccine;
        }

   bool Board::is_clean(){
        for (auto& dis : cubesOfDiseas)
        {
            if (dis.second > 0){return false;}
        }
        return true;
   }
        std::ostream& operator<< (std::ostream& output, const Board& c){
                return output;
        }


}
