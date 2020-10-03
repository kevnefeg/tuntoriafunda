#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1,x2,y1,y2;
    float  resta_de_x=0;
    float  resta_de_y=0;
    float suma=0;
    int expo=2;
    float respuesta=0;


    cout<<"Ingrese el valor de x1 :";
    cin>>x1;
    
    cout<<"\n Ingrese el valor de x2 :";
    cin>>x2;
    
    cout<<"\n Ingrese el valor de y1 :";
    cin>>y1;
 
    cout<<"\n Ingrese el valor de y2 :";
    cin>>y2;
    cout<<endl;


    resta_de_x=pow((x1-x2),expo);
    resta_de_y=pow((y1-y2),expo);

    suma= resta_de_y+resta_de_x;

    respuesta=(sqrt(suma));

    cout<<respuesta;


    return 0;
}