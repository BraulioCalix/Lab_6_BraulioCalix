#ifndef PINTURA_H
#define PINTURA_H
#include <string>
using namespace std;
class Pintura{
    private:
        string color;
        string acabado;
	public:
    Pintura();
    Pintura(string, string);
    string tostring();
    void setColor(string);
    string getColor();
    void setAcabado(string);
    string getAcabado();
    
};
#endif