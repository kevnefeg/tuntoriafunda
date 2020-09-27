#include <iostream>

using namespace std;

int main()
{
//variables
    float radio;
    float pi=3.1416;
     int n=2;
    

//salida y entrada de texto 
    cout<<"Bienvenido \n";
    cout<<"Inserte el radio del circulo \n";
    cin>>radio;

//formulas

    float area= (pi*radio*radio);
    float perimetro= (n*pi*radio);


    cout<<"Area del circulo \n";
    cout<<area<<"cm^2 \n";
    cout<<"Perimetro del circulo \n";
    cout<<perimetro;
}