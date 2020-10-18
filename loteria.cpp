#include <iostream>
using namespace std;

int main()
{
    int color;

    cout<<"-*-*-*-*ESCOGA UN COLOR *-*-*-*-*-\n";
    cout<<"1. Negro\n";
    cout<<"2 Azul\n";
    cout<<"3. Rojo\n";
    cout<<"4. Morado\n";
    cout<<"5. Salir\n";
    cin>>color;
    cout<<endl;

    switch (color)
    {
    case 1:cout<<"Usted a ganado $50";
        break;
    case 2:cout<<"Usted a ganado $450";
        break;
    case 3:cout<<"Usted a ganado -$50";
        break;
    case 4:cout<<"Usted a ganado $230";
        break;
    case 5:
    cout<<"Programa terminado";
    default:
    cout<<"Opcion no valida";
        break;
    }
    return 0;
}