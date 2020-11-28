#include <iostream>
#include <string>

using namespace std;

struct notas
{
    string name[20];
    float notax[10];
};
struct notas notes;

void ingresar();
void ingresar()
{
    int numero;
    float promedio=0;
    float total=0;
    cout<<"Ingrese cuantas personas \n";
    cin>>numero;

    for (int i = 0; i < numero; i++)
    {
        cin.ignore();
        cout<<"Ingrese el nombre ";
        getline(cin,notes.name[i]);
        cout<<"Ingrese la edad"<<i+1<<" ";
        cin>>notes.notax[i];
    }

    for (int j = 0; j < numero; j++)
    {
        promedio+= notes.notax[j];
        total = promedio/numero;

    }
    cout<<"el total es: "<<total;

}

int main()
{
    int option;
    bool status = true;

    do
    {
        cout<<"\n Calculadora \n";
        cout<<"1. Ingresar los numeros \n";
        cout<<"3. Salir \n";
        cin>>option;

        switch (option)
        {
        case 1: ingresar(); break;
      //  case 2: cantidad(); break;
        case 3: status = false; break;
        
        default:
            break;
        }
    } while (status);
    return 0;
}