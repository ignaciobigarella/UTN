#include <iostream>

using namespace std;

int main()
{
    int base, exponente, i, resultado;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese el exponente: ";
    cin>>exponente;
    for(i=1;i<=exponente;i++){
        resultado=resultado*base;
    }
    cout<<"La base "<<base<<" elevada a la "<<exponente<<" da como resultado: "<<resultado;
    return 0;
}
