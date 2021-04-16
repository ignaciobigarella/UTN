#include <iostream>

using namespace std;

int main()
{
    int i=1, n, contP=0, contN=0, contCero=0;
    for (i=1; i<=10; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (n>0) {
            contP++;
        }
        else if (n<0) {
            contN++;
        }
        else contCero++;
    }
    cout<<"Los numeros positivos son: "<<contP<<"\n";
    cout<<"Los numeros negativos son: "<<contN<<"\n";
    cout<<"Los numeros 0 son: "<<contCero;
    return 0;
}
