#include "Pintura.h"
#include <iostream>
using namespace std;
Pintura::Pintura(){
    color="";
    acabado="";

}
Pintura::Pintura(string colo,string aca){
    color=colo;
    acabado=aca;
}
void Pintura::tostring(){
    cout << "pintura: color- " <<color << "acabado: "<< acabado ;
}
void Pintura::setAcabado(string acab){
    acabado=acab;
}
void Pintura::setColor(string col){
    color=col;
}
string Pintura::getAcabado(){
    return acabado;
}
string Pintura::getColor(){
    return color;
}