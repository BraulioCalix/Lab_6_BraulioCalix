#include "Carro.h"
#include "Motor.h"
#include "Pintura.h"
#include "Chasis.h"
#include <iostream>
using namespace std;
Carro::Carro(){
    pintura = Pintura(); 
    motor = Motor();
    chasis = Chasis();
    nombre="";
    numero=0;
}
Carro::Carro(Pintura pintu,Motor moto,Chasis chasi,string nombr,int nume){
    pintura=pintu;
    motor=moto;
    chasis=chasi;
    nombre=nombr;
    numero=nume;
}
    void Carro::tostring(){
        cout << "motor: ";
        pintura.tostring(); 
        motor.tostring(); 
        chasis.tostring();
        cout <<"nombre de modelo: "<<nombre << "numero: "<<numero;
        
    }
    void Carro::setPintura(Pintura pi){
        pintura=pi;
    }
    void Carro::setChasis(Chasis chas){
        chasis=chas;
    }
    void Carro::setMotor(Motor mot){
        motor=mot;
    }
    Motor Carro::getMotor(){
        return motor;
    }
    Pintura Carro::getPintura(){
        return pintura;
    }
    Chasis Carro::getChasis(){
        return chasis;
    }
