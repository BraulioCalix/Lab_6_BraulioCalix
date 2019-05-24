#ifndef CHASIS_H
#define CHASIS_H
#include <string>
using namespace std;
class Chasis{
    private:
        string ruedas;
        string transmision;
	public:
    Chasis();
    Chasis(string, string);
    void tostring();
    void setRuedas(string);
    string getRuedas();
    void setTransmision(string);
    string getTransmision();
};  
#endif