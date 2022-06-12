/*Crear un programa en c++ el cual lea dos numeros 
y en base a ellos determine cual de ellos es el MAYOR*/

#include <iostream>
using namespace std;

int main(){
    //Declaracion de las variables
    int num1, num2;

    //Pediendole los datos al usuario
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    //Validaciones

    if(num1 == num2){
        cout<<"Ambos numeros son iguales";
    }else if (num1 > num2){
        cout<<"El numero MAYOR es: "<<num1;
    }else{
        cout<<"El numero MAYOR es: "<<num2;
    }
    return 0;
}