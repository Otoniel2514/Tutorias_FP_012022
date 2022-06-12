/* La calificacion final sera en base a tres notas: 
La nota de la practica la cual cuenta con una ponderacion del 30%,
la nota teorica la cual cuenta con una ponderacion del 60%, y finalmente la nota de la 
participacion la cual cuenta con una ponderacion del 10%. 
Crear un programa el cual calcule la calificacion final en base a estas 3 notas*/

#include <iostream>
using namespace std;

int main(){
    //Declaracion de variables a usar en el programa
    float notaPractica, notaTeorica, notaParticipacion;
    int notaFinal;

    //Pidiendole los datos al usuario
    cout<<endl;
    cout<<"Ingrese la nota obtenida en la practica: ";
    cin>>notaPractica;
    cout<<"Ingrese la nota obtenida en la teoria: ";
    cin>>notaTeorica;
    cout<<"Ingrese la nota obtnidad en la participacion: ";
    cin>>notaParticipacion;

    //Operaciones
    notaPractica = notaPractica * 0.30;
    notaTeorica = notaTeorica * 0.60;
    notaParticipacion = notaParticipacion * 0.10;

    notaFinal = notaPractica + notaTeorica + notaParticipacion;

    cout<<"La nota final obtenida es: "<<notaFinal;

    return 0; 

}