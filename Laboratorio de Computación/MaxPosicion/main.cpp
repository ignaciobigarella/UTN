#include <iostream>

using namespace std;

int main()
{
    int i=1, maxN, n, posMax;
    for (i=1; i<=10; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (i==1) {
            maxN=n;
        }
        else if (n>maxN) {
            maxN=n;
            posMax=i;
        }
    }
    cout<<"El mayor numero de los ingresados es el: "<<maxN<<" En la posicion: "<<posMax;
    return 0;
}
