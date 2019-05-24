#include "Motor.h"
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
string Motor::tostring(){
    return 0;
}
string Motor::getConfi(){

    return confi;
}
string Motor::getTipo(){
    return tipo;
}