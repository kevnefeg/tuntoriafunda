#include <iostream>

using namespace std;
// Programa en c++ que verifica si un número es positivo, negativo o cero.
int main()
{
//variables
    float numero;

//entrada de datos 
    cout<<"Ingrese el numero a verificar \n";
    cin>>numero;

//verifica si es mayor que 0
    if (numero>0)
    {
        cout<<"El numero es positivo\n";
    }
//verifica si es menor 0
    else if (numero<0)
    {
        cout<<"El numero es negativo \n";
    }
//si no es ninguna de las opciones anteriores es esta...
    else
    {
        cout<<"El numero es 0 \n";

    }

    return 0;  
}