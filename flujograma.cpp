#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float radio;
    float perimetro;
    float area;

    cout<<"\ncalculo del perimetro y area de un circulo\n";
    
//ENTRADA MANUAL
    cout<<"Digite el radio de la circunferencia :";
    cin>>radio;

//PROCESO 
    perimetro=2*3.1416*radio;

    area=3.1416*pow(radio,2);

    cout<<"el perimetro es = :"<<perimetro<<endl;
    cout<<"el area es = "<<area<<endl;


    return 0;

}