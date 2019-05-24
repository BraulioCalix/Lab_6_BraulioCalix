#include "Pintura.h"
#include "Carro.h"
#include "Chasis.h"
#include "Motor.h"
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int cont1=0;
    int cont2=0;
    int cont3=0;
    int cont4=0;
    int cont5=0;
    int contproduc=0;
    bool vivo =true;
    vector<Carro*> carros;
    char** matrix = NULL;
	matrix = new char*[5];
	for (int i = 0;i<5;i++){
		matrix[i]= new char[5];
	}
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            matrix[i][j]=' ';
        }
        
    }
    
    int cuentalinea=0;
    while(vivo==true){
        cout << "bienvenido a la fabrica" << endl
        << "que desea hacer? "<< endl 
        << "1) Agregar una linea de produccion"<< endl
        << "2) ver matriz de lineas de produccion."<< endl
        << "3) ver lineas de produccion con detalle de los carros"<< endl
        << "4) ver listado de carros producidos"<<endl
        << "5) avanzar ciclo de linea de produccion "<<endl
        << "6) salir y limpiar todo"<< endl;
        int opcion=0;
        cin>>opcion;
        switch(opcion){
            case 1:{
            //agregar a linea de produccion
            if(cuentalinea <=5){
                    cout << "se le pedira ingresar las caracteristicas del prototipo"<< endl;
                    cout << "ingrese el nombre del modelo"<< endl;
                    string nombre="";
                    cin >>nombre;
                    cout<< "para el chasis"<< endl;
                    cout << "que tipo de ruedas desea? normales 0 para nieve: "<< endl;
                    string rueda="";
                    cin >>rueda; 
                    cout << "que tipo de transmision? automatico o mecanico: "<< endl;
                    string trans="";
                    cin>> trans;
                    Chasis* chasis=new Chasis(rueda,trans);
                    cout << "para el motor "<< endl;
                    cout << "que tipo de motor desea? electrico o normal" << endl;
                    string motor = "";
                    cin>> motor;
                    cout << "como desea la configuracion? 1) v6 2) v8: "<< endl;
                    string  confi="";
                    cin>> confi;
                    Motor* motore= new Motor(motor,confi);
                    cout << "ingrese la pintura que desea: " << endl;
                    string color ="";
                    cin >> color;
                    cout<< "ingrese el tipo de acabado: "<< endl;
                    string acabado=" ";
                    cin >>acabado;
                    Pintura* pintura= new Pintura(color,acabado);
                    Carro* Carros= new Carro(pintura[0],motore[0],chasis[0],nombre,contproduc);
                    contproduc++;
                    carros.push_back(Carros);
                    cuentalinea++;
                    matrix[cuentalinea-1][0]='p';
            }else{
                cout<< "ya no se pueden crear mas prototipos";
            }
            }
            break;
            case 2:// ver matriz
            {
                if (cuentalinea>0){
                    for (int i = 0; i < 5; i++){
                        for (int j = 0; j < 5; j++){
                            cout << "["<<matrix[i][j]<< "]";

                        }
                        cout <<  endl;
                    }
                }else{
                    cout<<"no se han agregado prototipos"<<endl;
                }
            }
            break;
            case 3://ver lineas con detalle
            {
                for (int  i = 0; i < carros.size(); i++){
                    cout << "linea de produccion numero "<<i+1<< endl;
                    carros[i]->tostring();
                }
            }
            break;
            case 4://ver los producidos
            {

            }
            break;
            case 5: //avanzar en el ciclo
            {
                if(matrix[4][0]=='p'){
                        cont5++;
                        matrix[4][cont5]='C';
                }
                if(matrix[3][0]=='p'){
                    cont4++;
                    matrix[3][cont4]='C';
                }
                if(matrix[2][0]=='p'){
                    cont3++;
                    matrix[2][cont3]='C';
                }
                if(matrix[1][0]=='p'){
                    cont2++;
                    matrix[1][cont2]='C';
                }
                if(matrix[0][0]=='p'){
                    cont1++;
                    matrix[0][cont1]='C';
                }                
            }break;
            case 6: //salir y limpiar
            {
                vivo=false;
                for (int i = 0; i <carros.size(); i++){
	                delete carros[i];
                    
                }
//opcional: borrar casillas si se vuelve a usar el vector
                carros.clear();
                for(int i=0;i<5;i++){
		            if(matrix[i]!=NULL){
			            delete[] matrix[i];
       			    matrix[i]= NULL;
		            }	
	            }
                

            }break;
        }//fin switch
    }//fin while
    
}