#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i=1, pos=0, neg=0, contP=0, contN=0, negAnt, n;
    for (i=1; i<=20; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (n>0) {
            neg=0;
            pos++;
            if (pos==3) {
                contP++;
                pos=0;
            }
        }
        if (n<0 && neg==0) {
            pos=0;
            neg++;
            negAnt=n;
        }
        else if (n>negAnt) {
            neg++;
            negAnt=n;
            if (neg==3) {
                contN++;
                neg=0;
            }
        }
        if (n==0) {
            neg=0;
            pos=0;
        }
    }
    cout<<"La cantidad de ternas de numeros positivos consecutivos es de: "<<contP<<"\n";
    cout<<"La cantidad de ternas de numeros negativos ordenados de manera ascendente es de: "<<contN;
    return 0;
}


