#ifndef MOTOR_H
#define MOTOR_H
#include <string>
using namespace std;
class Motor{
    private:
        string tipo;//electrico o normal
        //true electrico, false normal
        string confi;
	public:
    Motor();
    Motor(string, string);
    string tostring();
    string getTipo();
    string getConfi();
    void setTipo(string);
    void SetConfi(string);
};
#endif