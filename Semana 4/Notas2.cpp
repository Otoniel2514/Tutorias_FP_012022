//Crear un programa que calcule el promedio de 5 calificaciones

#include "iostream"
using namespace std;

int main(){
    //Declaracion de las variables
    float Nota1, Nota2, Nota3, Nota4, Nota5, Promedio;
    
    cout<<endl;
    cout<<"Programa que calcula el promedio de 5 Calificaciones"<<endl<<endl;

    cout<<"Ingrese la primer nota"<<endl;
    cin>>Nota1;
    cout<<"Ingrese la segunda nota"<<endl;
    cin>>Nota2;
    cout<<"Ingrese la tercer nota"<<endl;
    cin>>Nota3;
    cout<<"Ingrese la cuarta nota"<<endl;
    cin>>Nota4;
    cout<<"Ingrese la quinta nota"<<endl;
    cin>>Nota5;
    
    Promedio = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5) / 5;

    cout<<endl;
    cout<<"El promedio de sus notas es: "<<Promedio<<endl;
    cout<<endl;

    system("Pause");
    return 0;
}
