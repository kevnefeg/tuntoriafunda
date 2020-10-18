#include <iostream>
using namespace std;
//funciones pre llamadas
int duplicar(float);
int triplicar(float);
int cuadruplicar(float);
int quintuplicar(float);



int main(void)
{
    int opcion;
    float multiplicacion;
    bool repetir =true;

    do
    {
        cout<<"\n MULTPLICAR UN NUMERO\n";
        cout<<"Digitar su numero entero :";
        cin>>multiplicacion;
        cout<<endl;

        cout<<"\nLas opciones para multiplicar el numero son\n";
        cout<<"1) Duplicar el valor \n";
        cout<<"2)Triplicar el valor\n";
        cout<<"3) Cuadriplicar el valor \n";
        cout<<"4) Quintuplicar el valor \n";
        cout<<"5) Salir \n";
        cin>>opcion;

        switch (opcion)
        {
        case 1:cout<<"El numero duplicado es "<<duplicar(multiplicacion)<<endl;
            break;
        case 2:cout<<"El triple es: "<<triplicar(multiplicacion);
            break;
        case 3: cout<<"El cuadruple es :"<<cuadruplicar(multiplicacion);
            break;
        case 4:cout<<"El quintuple es:"<<quintuplicar(multiplicacion);
            break;
        case 5:
        repetir = false;
            break;
        
        default:
            break;
        }

    } while (repetir);
    
}

//funciones usadas para multiplicar
int duplicar(float multiplicar)
{
    return 2*multiplicar;
}
int triplicar(float multiplicar)
{
    return 3*multiplicar;
}
int cuadruplicar(float mutiplicar)
{
    return 4*mutiplicar;
}
int quintuplicar(float multiplicar)
{
    return 5*multiplicar;
}
