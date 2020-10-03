#include <iostream>
#include <math.h>

using namespace std;

int main()
{
//variables
    float area;
    float respuesta;
    int n=2;


    cout<<"Bienvenido al programa del area \n";

    cout<<"Ingrese el area : ";
    cin>>area;


    respuesta=pow(area,n);


    cout<<"Nuestra area es : "<<respuesta;


}