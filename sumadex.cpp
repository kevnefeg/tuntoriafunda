#include <iostream>

using namespace std;

int main()
{
    float x=0;
    int n;
    float suma=0;
    
    cout<<"Cuantos numeros quiere sumar \n";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"ingrese un numero x \n";
        cin>>x;
        suma += x;
    }

    cout<<"La suma es \n"<<suma;
    

    return 0;

}