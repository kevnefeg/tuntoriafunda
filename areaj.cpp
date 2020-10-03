#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float area=0;
    float volumen =0;
    float pi = 3.1416;
    int exponente =2;
    int exponente_2 = 3;
    float volum =1.3333;
    int b=4;
    float radio;

    cout<<"Ingrese el radio \n ";
    cin>>radio;
//formula del volumen
    volumen= volum*pi*pow(radio,exponente_2);
//formula del area 
    area= b*pi*pow(radio,exponente);

//salida de respuesta de area 
    cout<<area;
    cout<<endl;
    
//salida de respuesta de volume 

    cout<<volumen; 


    return 0;

}