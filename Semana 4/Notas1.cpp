//Calcular el promedio de 5 notas 

#include "iostream"
using namespace std;

int main(){
    //Declaracion de las variables a utilizar en el programa
    float calificaciones = 0;
    float aux = 0;
    float promedio = 0;

    cout<<"Programa que calcula el promedio de 5 calicaciones"<<endl<<endl;

    for(int i = 1; i <= 5; i++){
        cout<<"Ingrese la calificacion obtenida: ";
        cin>>aux;
        calificaciones = calificaciones + aux;
        }
        promedio = (calificaciones)/5;

        cout<<endl;
        cout<<"El promedio de sus calificaciones es: "<<promedio<<endl;

        return 0;
}