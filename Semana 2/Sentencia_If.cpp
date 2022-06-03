//Uso de la sentencia IF
#include "iostream"
using namespace std;

int main(){
    //Declaracion de las variables 
    int number, date = 18;

    cout<<endl;
    cout<<"Digite un numero: ";
    cin>>number;

    if(number <= date){
        cout<<"El dato que usted ingreso es menor o igual a 18"<<endl;
        cout<<endl;
    }
    else{
        cout<<"El dato que usted ingreso es Mayor a 18"<<endl;
        cout<<endl;
    }
}
