#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int base ;
    int exponente ;
    int resultado;

//salida y entrada de la base 
 cout<<"Ingrese la base \n";
    cin>>base;

//salida y entrada de exponente 
  cout<<"Ingrese el exponente \n";
   cin>>exponente;

//funcion para la potencia 
    resultado=pow(base,exponente);

//salida del resultado de la potencia 
    cout<<base<<" elevado a la "<<exponente<<" es igual a "<<resultado<<endl;

    return 0;
}