#include "Motor.h"
#include <iostream>
using namespace std;
Motor::Motor(){
    tipo="";
    confi="";
}
Motor::Motor(string tip,string config){
    tipo=tip;
    confi=config;
}
void Motor::setTipo(string tipo1){
    tipo=tipo1;
}
void Motor::SetConfi(string configura){
    confi=configura;

}
void Motor::tostring(){
    cout << "motor: -tipo: "<<tipo << "configuracion: "<<confi ;
}
string Motor::getConfi(){

    return confi;
}
string Motor::getTipo(){
    return tipo;
}