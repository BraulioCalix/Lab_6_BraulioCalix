#include "Chasis.h"
Chasis::Chasis(){
    ruedas="";
    transmision="";
}
Chasis::Chasis(string rueda,string trans){
    ruedas=rueda;
    transmision=trans;
}
string Chasis::tostring(){
return 0;
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