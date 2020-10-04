#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char palabra[20];
    cout<<"Inserte una palabra\n";
    cin>>palabra;
    int Nm =strlen(palabra);

    if (palabra[0]==palabra[Nm-1])
    {
        cout<<"Inicia y termina con la misma letra \n";
    }
    else
    {
        cout<<"Inicia pero no termina con la misma letras\n";
    }


    return 0;

}