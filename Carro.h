#ifndef CARRO_H
#define CARRO_H
#include <string>
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"
using namespace std;
class Carro{
    private:
        Pintura pintura;
        Motor motor;
        Chasis chasis;
        string nombre;
        int numero;
	public:
    Carro();
    Carro(Pintura,Motor,Chasis,string,int);
    void setNumero(int);
    int getNumero();
    void tostring();
    void setPintura(Pintura);
    Pintura getPintura();
    void setMotor(Motor);
    Motor getMotor();
    void setChasis(Chasis);
    Chasis getChasis();
};
#endif