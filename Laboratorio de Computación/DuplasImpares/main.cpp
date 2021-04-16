#include <iostream>

using namespace std;

int main()
{
    int i=1, n, contImpar=0, cantImpar=0;
    for (i=1; i<=10; i++) {
       cout <<"Ingrese el numero "<<i<<": ";
       cin >> n;
       if (n%2!=0) {
        contImpar++;
       }
       else {
        contImpar=0;
       }
       if (contImpar==2) {
        cantImpar++;
        contImpar--;
       }

    }
    cout <<"La cantidad de duplas de impares consecutivos es de: "<<cantImpar;
}
