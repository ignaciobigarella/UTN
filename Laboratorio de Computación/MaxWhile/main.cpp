#include <iostream>

using namespace std;

int main()
{
    int n=1, vMax=0;
    while (n!=0) {
        cout<<"Ingrese un numero (0 para terminar): ";
        cin>>n;
        if (n>vMax) vMax=n;
    }
    cout<<"El maximo numero ingresado es el: "<<vMax;
}
