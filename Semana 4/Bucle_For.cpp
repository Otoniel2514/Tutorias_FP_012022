//Retomando los bucles for de las sesiones anteriores

#include "iostream"
using namespace std;

int main(){
    //Declaracion de las variables
    int n, i, suma = 0;

    cout<<endl;
    cout<<"Digite el numero de elementos"<<endl;
    cin>>n;

    for(i =1; i<=n; i++){
        suma += i;
    }
    cout<<"La suma de los primeros"<<" "<<n<<" "<<"numeros es: "<<suma<<endl;
}