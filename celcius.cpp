#include <iostream>

using namespace std;

int main()
{
    float respu =0;
    int grados;


    cout<<"Ingrese los grados en C \n";
    cin>>grados;
    cout<<endl;

    respu=(1.8*grados)+32;

    cout<<respu<<" F";

    return 0;
}