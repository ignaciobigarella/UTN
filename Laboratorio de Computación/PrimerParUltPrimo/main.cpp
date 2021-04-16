#include <iostream>

using namespace std;

int main()
{
    int n, i=1, j=1, contPar=0, Primo, Par, ubiPar, ubiPrimo, contPrimo;
    for (i=1; i<=7; i++) {
        contPrimo=0;
        cout<<"Ingrese el numero "<<i<<":";
        cin>>n;
        if (n%2==0 && contPar==0) {
            contPar++;
            Par=n;
            ubiPar=i;
        }
        for (j=1; j<=n; j++) {
            if (n%j==0) {
                contPrimo++;
            }
            if (contPrimo==2) {
                Primo=n;
                ubiPrimo=i;
            }
        }
    }
    cout<<"El primer numero par en la lista es el: "<<Par<<" y su ubicacion es: "<<ubiPar<<"\n";
    cout<<"El ultimo numero primo en la lista es el: "<<Primo<<" y su ubicacion es: "<<ubiPrimo<<"\n";
}
