#include <iostream>

using namespace std;

int main()
{
//el promedio de 3 numeros 
    float num1;
    float num2;
    float num3;
    float promedio;
    
//salida de texto 
    cout<<"Bienvenido porfavor ingrese 3 numeros \n"; 
     
//entrada de 3 numeros seguidos 
    cin>> num1 >> num2 >> num3;

//como sacar un promedio
    promedio= (num1+num2+num3)/3;

    cout<< "Promedio \n";
    cout<< promedio;

    return 0;
}