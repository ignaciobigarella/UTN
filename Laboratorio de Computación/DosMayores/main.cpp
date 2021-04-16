#include <iostream>

using namespace std;

int main()
{
    int i=1, n, mayorUno=0, mayorDos=0;
    for (i=1; i<=5; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (i==1) {
            mayorUno=n;
        }
        else if (i==2 && n>mayorUno) {
            mayorDos=n;
            mayorUno=mayorUno;
        }
        else if (i==2 && n<mayorUno) {
            mayorDos=mayorUno;
            mayorUno=n;
        }
        else if (n>mayorUno && n<mayorDos) {
            mayorDos=mayorUno;
            mayorUno=n;
        }
        else if (n>mayorDos) {
            mayorUno=mayorDos;
            mayorDos=n;
        }
    }
        cout<<"Los mayores numeros son el numero "<<mayorUno<<" y el numero "<<mayorDos;
}
