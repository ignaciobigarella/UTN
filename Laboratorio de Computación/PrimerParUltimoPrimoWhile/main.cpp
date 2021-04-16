#include <iostream>

using namespace std;

int main()
{
    int n=1, i=0, cantDiv=0, Primo, cPar=0, Par;
    while (n!=0) {
        cout << "Ingrese el numero deseado (0 para terminar): ";
        cin >> n;
        while (i!=n) {
            i++;
            if (n%i==0) {
                cantDiv++;
            }
        }
        if (cantDiv==2) {
            Primo=n;
            cantDiv=0;
        }
        else (cantDiv=0);

        if (n%2==0 && cPar==0) {
            cPar=1;
            Par=n;
        }
        i=0;
    }
    cout <<"El primer numero par ingresado es: "<<Par<<"\n";
    cout <<"El ultimo numero primo ingresado es: "<<Primo;
}

