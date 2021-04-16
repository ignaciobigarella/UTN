#include <iostream>

using namespace std;

int main()
{
    int n=1, vMax=0, vAnt=0;
    while (n!=0) {
        cout<<"Ingrese un numero (2 numeros iguales seguidos para terminar): ";
        cin>>n;
        if (vAnt==n) n=0;
        if (n>vMax) {
            vMax=n;
            vAnt=n;
        }
    }
    cout<<"El maximo numero ingresado es el: "<<vMax<<i;
}
