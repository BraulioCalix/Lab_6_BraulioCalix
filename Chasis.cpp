#include "Chasis.h"
#include <iostream>
using namespace std;
Chasis::Chasis(){
    ruedas="";
    transmision="";
}
Chasis::Chasis(string rueda,string trans){
    ruedas=rueda;
    transmision=trans;
}
void Chasis::tostring(){
cout<< "Chasis - ruedas:" << ruedas <<" "<<"- transmision: "<<transmision ;
}
void Chasis::setRuedas(string rue){
    ruedas=rue;
}
void Chasis::setTransmision(string tranm){
    transmision=tranm;
}
string Chasis::getRuedas(){
    return ruedas;
}
string Chasis::getTransmision(){
    return transmision;
}