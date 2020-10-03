#include <iostream>
#include <math.h>

using namespace std;
int main()
{
//variables 
    float distancia_i;
    float velocidad_i;
    float velocidad_f;
    float tiempo;
    float aceleracion=0;
    float distancia_recorrida=0;
    float medio =0.5;

//salida del texto
    cout<<"Ingrese la distancia inicial : ";
    cin>>distancia_i;

    cout<<"\n Ingrese la velocidad inicial : ";
    cin>>velocidad_i;

    cout<<"\n Ingrese la velocidad final : ";
    cin>>velocidad_f;

    cout<<"\n Cual es el tiempo transcurrido :";
    cin>>tiempo;
    
//formula de acelaracion 
    aceleracion=(velocidad_f-velocidad_i)/tiempo;

//formula de distancia 
    distancia_recorrida=distancia_i+velocidad_i*tiempo+medio*aceleracion*pow(tiempo,2);
    
//salida del texto 
    cout<<distancia_recorrida;

    return 0;
}