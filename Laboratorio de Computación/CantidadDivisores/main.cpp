#include <iostream>

using namespace std;

int main()
{
    int i=1, n, cantDiv=0;
    cout<<"Ingrese el numero deseado: ";
    cin>>n;
    for (i=1; i<=n; i++)
    if (n%i==0) {
        cantDiv++;
    }
    cout<<"La cantidad de divisores del numero es: "<<cantDiv;
}
