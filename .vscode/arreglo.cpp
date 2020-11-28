#include <iostream>

using namespace std;

struct notas
{
    float notax[50];
    
};
struct notas notes;

void ingresar()
{
   int number=0;
    cout<<"Cuantos numeros desea ingresar \n";
    cin>>number;
     

    for (int i = 0; i < number; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<" ";
        cin>>notes.notax[i];
    }
    
}


void positivos()
{
    int contador =0;
    int contador2 =0;
    for (int i = 0; i < 4; i++)
    {
        if (notes.notax[i]>=0)
        {
            contador ++;
        }
        else
        {
            contador2++;
        }
        
    
    }
     cout<<"\n la cantidad de numeros positivos son \t"<<contador;
     cout<<"\n la cantidad de numeros -* son \t"<<contador2;
    
}

void negativo()
{
    int contador2 =0;
    for (int i = 0; i < 4; i++)
    {
        if (notes.notax[50]<0)
        {
            contador2 ++;
        }
    
    }
     cout<<"la cantidad de numeros negativos son \t"<<contador2;
    
}

int main()
{
    int option;
    bool status = true;

    do
    {
        cout<<"\n CALCULADORA \n";
        cout<<"1. Ingresar numero \n";
        cout<<"2.Ver cuantos numeros positivos \n";
        cout<<"3.Ver cuantos numeros negativos \n";
        cout<<"4.Salir \n";
        cin>>option;

        switch (option)
        {
        case 1: ingresar(); break;
        case 2: positivos(); break;
        case 3: negativo(); break;
        case 4: status = false; break;
        default:
            break;
        }
    } while (status);


    return 0;
    
}
