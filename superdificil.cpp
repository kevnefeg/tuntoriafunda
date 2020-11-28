#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

const int longacad =20;
struct costo
{
    char nombrearticulo[longacad +1];
    int cantidad;
    float precio;
    float costoporaritculo;
    float total;
}prod[20];


int menu(void)
{
  
 
    cout<<"\n 1. comprar un producto";
    cout<<"\n 2. Salir";
    cout<<"\n Ingrese su opcion";
    
    
}
void recopilacion(int max)
{
    for (int i = 0; i < max; i++)
    {
        cout<<"Producto"<<i+1<<endl;

        cout<<"Ingrese el nombre del producto a comprar = ";
        cin>>prod[i].nombrearticulo;
        cout<<"Ingrese la cantidad del producto a comprar = ";
        cin>>prod[i].cantidad;
        cout<<"Ingrese el precio del producto $ ";
        cin>>prod[i].precio;
        cout<<endl;
    }
    
}

float costo (int max)
{
    //int num;
    for (size_t i = 0; i < max; i++)
    {
        prod[i].costoporaritculo=prod[i].precio * prod[i].cantidad;
    }
    
}

void factura (int max)
{
    cout<<"\n****************************RECIBO****************************\n";

    for (size_t i = 0; i < max; i++)
    {
        cout<<"Producto  "<<prod[i].nombrearticulo<<endl;
        cout<<setprecision(2)<<"cantidad de producto  "<<prod[i].cantidad<<endl;
        cout<<"Precio del producto  "<<prod[i].precio<<endl;
        cout<<"Sub - total  "<<prod[i].costoporaritculo<<endl;

    }
    
}

float preciototal(int max)
{
    float suma =0;

    for (size_t i = 0; i < max; i++)
    {
        suma += prod[i].costoporaritculo;
    }

    cout<<"El total de las compras es $"<<suma;
    cout<<endl;
    
}
int main()
{
    int opcion;
    int max;

    cout<<"\n****************************TIENDA VIRTUAL****************************";
    menu();
    cin>>opcion;



    switch (opcion)
    {
    case 1:
    cout<<"\n****************************TIENDA VIRTUAL****************************";
    cout<<"\nIngresar cantidad de productos = ";
    cin>>max;
    cout<<endl;
    recopilacion(max);
    costo(max);
    factura(max);
    preciototal(max);
        break;
    
    case 2:
    
    cout<<"\n Gracias por usar nuestro servicio";
        break;
    
    default:
    cout<<"\n Opcion incorrecta";
        break;
    }
    getch();
    return 0;
}