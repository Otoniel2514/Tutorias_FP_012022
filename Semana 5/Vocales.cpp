//Crear un programa que le permita identificar dentro del avecedario cuales son vocales y cuales no
#include "iostream"
#include "stdlib.h"
using namespace std;
int main(){
    //Declaracion de variables
    char letra;
    cout<<"Digite su letra del orden alfabetico: "<<endl,
    cin>>letra;

    switch(letra){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<"Su letra del orden alfabetico, SI es una vocal."<<endl;
        break;
        default:
        cout<<"La letra del orden alfabetico, NO es una vocal, intentelo de nuevo :("<<endl;
    }
    system("Pause");

    return 0;

}
