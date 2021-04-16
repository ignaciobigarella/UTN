#include <iostream>

using namespace std;

int main()
{
    int i=1, numLista, n, contP=0;
    cout<<"Que cantidad de numeros tendra la lista?: ";
    cin>>numLista;
    for (i=1; i<=numLista; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (n>0) {
            contP++;
        }
    }
    cout<<"Los numeros positivos son: "<<contP;
    return 0;
}
