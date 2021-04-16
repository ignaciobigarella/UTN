#include <iostream>

using namespace std;

int main()
{
    int par1=0, primo=0, contPar=0, cantDiv=0, i=1, n, j;
    for (i=1; i<=7; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (contPar==0 && n%2==0) {
            par1=n;
            contPar++;
        }
    }
    cout <<"El primer numero par ingresado es: "<<par1<<"\n";
    cout <<"El ultimo numero primo ingresado es: "<<primo;
    return 0;
}
