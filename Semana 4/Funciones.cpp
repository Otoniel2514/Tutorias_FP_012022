//Funcion es un mini programa que nos permite realiar una accion que deseamos en el main

//Uso de funciones

#include "iostream"
using namespace std;

void suma();
void resta();

int main(){
    suma();
    resta();
    return 0;
}
void suma()
{
    int a,b, suma;
    cout<<"Operacion de la suma"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    suma = a + b;
    cout<<"La suma es: "<<suma<<endl;
}
void resta()
{
    int a,b, resta;
    cout<<"Operacion de la resta"<<endl;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    resta = a - b;
    cout<<"La resta es: "<<resta<<endl;
}
