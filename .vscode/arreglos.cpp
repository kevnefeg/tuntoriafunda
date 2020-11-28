#include <iostream>

using namespace std;

struct notas
{
    float notax[10];
};
struct notas notes;

void ingresar()
{
    int numero =5;
    cout<<"Ingrese los 5 numeros \n";
    for (int i = 0; i < numero; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<" ";
        cin>>notes.notax[i];
    }
}

void cantidad()
{
    int contadorPositivo =0;
    int contadorNegativo =0;
    for (int j = 0; j < 5; j++)
    {
        if (notes.notax[j]>=0)
        {
            contadorPositivo ++;
        }
        else
        {
            contadorNegativo ++;
        }     
    }
    cout<<"La cantidad de numeros positivos son: "<<contadorPositivo<<endl;
    cout<<"La cantidad de numeros negativos son: "<<contadorNegativo;
}


int main()
{
    int option;
    bool status = true;

    do
    {
        cout<<"\n Calculadora \n";
        cout<<"1. Ingresar los numeros \n";
        cout<<"2. Cuantos numeros positivos y negativos \n";
        cout<<"3. Salir \n";
        cin>>option;

        switch (option)
        {
        case 1: ingresar(); break;
        case 2: cantidad(); break;
        case 3: status = false; break;
        
        default:
            break;
        }
    } while (status);


    return 0;
    
}