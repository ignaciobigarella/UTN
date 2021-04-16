#include <iostream>

using namespace std;

int main()
{
    int n=1, cPos=0, cNeg=0;
    while (n!=0) {
        cout<<"Ingrese un numero (0 para terminar): ";
        cin>>n;
        if (n>0) cPos++;
        if (n<0) cNeg++;
    }
    cout<<"La cantidad de numeros negativos es de: "<<cNeg<<"\n";
    cout<<"La cantidad de numeros positivos es de: "<<cPos;
}
