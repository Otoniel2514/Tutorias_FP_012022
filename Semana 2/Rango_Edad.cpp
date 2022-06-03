//Programa que calcula el rango de edad

#include "iostream"
using namespace std;

int main(){
    //Declarar variables
    int Age;

    cout<<endl;
    cout<<"Digite su edad: ";
    cin>>Age;

    //El rango de edad que queremos debe estar entre 18 y 30 años 18-19-20-21......30
    if((Age >= 18)&&(Age <= 30)){
        cout<<"Su edad se encuentra dentro del rango [18-30]"<<endl;
    }
    else{
        cout<<"Su edad NO se encuentra dentro del rango"<<endl;
        cout<<endl;
    }
}