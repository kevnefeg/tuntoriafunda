#include <iostream>
using namespace std;

int main ()
{
    int nm1;
    cout<<"Ingrese un numero entero\n";
    cin>>nm1;

    if (nm1%2==0)
    {
       cout<<"El numero es par";
    }
    else
    {
        cout<<"El numero es impar";
    }
    return 0;
}