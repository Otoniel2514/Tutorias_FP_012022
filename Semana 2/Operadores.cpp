//Codigo que contrendra el uso de operadores basicos

#include "iostream"
using namespace std;

int main(){
    //Operadores de suma, resta, multiplicacion, division ...
    //Declaracion de variables a utilizar en el programa 
    float a,b;
    float sum, substration, multiplication, division;
    float results;

    //Pedir datos al usuario
    cout<<endl;
    cout<<"Digite su primer numero: ";
    cin>>a;
    cout<<"Digite su segundo numero: ";
    cin>>b;

    //Operadores
    sum = a + b; 
    substration = a - b;
    multiplication = a * b;
    division = a / b;
    results = (a/b) + 1;

    //Mostrar los datos 
    cout<<"El resultado de la suma es: "<<sum<<endl;
    cout<<"El resultado de la resta es: "<<substration<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplication<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;
    cout<<"El resultado de la operacion es: "<<results<<endl;
    cout<<endl;

    //Auxiliar
    int num1, num2, aux;
    cout<<"Digite su primer numero: ";
    cin>>num1;
    cout<<"Digite su segundo numero: ";
    cin>>num2;

    aux = num1;
    num1 = num2;
    num2 = aux;
    cout<<"El nuevo valor de x es: "<<num1<<endl;
    cout<<"El nuevo valor de x es: "<<num2<<endl;
    cout<<endl;

    return 0;

}