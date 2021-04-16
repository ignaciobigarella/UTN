#include <iostream>

using namespace std;

int main()
{
    int n=1, vMax=0, i=0, posMax;
    while (n!=0) {
        cout<<"Ingrese un numero (0 para terminar): ";
        cin>>n;
        i++;
        if (n>vMax) {
            vMax=n;
            posMax=i;
        }
    }
    cout<<"El maximo numero ingresado es el: "<<vMax<<" y su posicion es: "<<posMax;
}
