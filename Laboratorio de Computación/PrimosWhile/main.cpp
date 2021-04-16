#include <iostream>

using namespace std;

int main()
{
    int n=1, i=0, cantDiv=0, Primo;
    cout << "Ingrese el numero deseado: ";
    cin >> n;
    while (i!=n) {
        i++;
        if (n%i==0) {
            cantDiv++;
        }
    }
    if (cantDiv==2) {
        cout << "Es un numero primo";
    }
    else cout << "No es un numero primo";

}
