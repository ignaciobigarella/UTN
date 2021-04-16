#include <iostream>

using namespace std;

int main()
{
    int i=1, n, sumaDiv=0;
    cout<<"Ingrese el numero deseado: ";
    cin>>n;
    for (i=1; i<=n; i++) {
        if (n%i==0) {
            sumaDiv=sumaDiv+i;
        }
    }
    if (sumaDiv-n==n) {
        cout<<"Es un numero perfecto";
    }
    else {
        cout<<"No es numero perfecto";
    }
}
