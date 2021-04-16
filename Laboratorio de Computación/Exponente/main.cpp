#include <iostream>

using namespace std;

int main()
{
    int base, exponente, i, resultado=1;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese el exponente: ";
    cin>>exponente;
    if (exponente>0) {
        for(i=1;i<=exponente;i++){
        resultado=resultado*base;
        }
    }
    else if (exponente<0) {
        for(i=1;i<=exponente;i++){
        resultado=resultado*base;
        }
        resultado=(float)1/resultado;
    }
    else
        resultado=1;
    cout<<"La base "<<base<<" elevada a la "<<exponente<<" da como resultado: "<<resultado;
    return 0;
}
