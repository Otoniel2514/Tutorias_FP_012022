//Serie mfibonacci 1 1 2 3 5 8 13 21 34 55 ...
#include "iostream"
#include "stdlib.h"
using namespace std;

int main(){
    //Declarar las variables a utilizar en el programa
    int n, p=0, q=1, r=1;
    cout<<endl;
    cout<<"PROGRAMA DE LA SERIE DE FIBONACCI"<<endl<<endl;
    cout<<"Digite el numero de elementos que desea de la serie fibonacci: "<<endl;
    cin>>n;
    cout<<"\n";
    cout<<"1. ";
    for(int i = 0; i < n; i++)
    {
        r = p + q;
        cout<<r<<" ";
        p = q;
        q = r;
    }
    cout<<"\n";
    system("pause");
    return 0;
}
