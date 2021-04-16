#include <iostream>

using namespace std;

int main()
{
    int imp1=0, imp2=0, contImp=0, i=1, n;
    for (i=1; i<=7; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (contImp==0 && n%2!=0) {
            imp1=n;
            contImp++;
        }
        else if (contImp==1 && n%2!=0) {
            imp2=n;
        }
    }
    cout <<"El primer impar ingresado es: "<<imp1<<"\n";
    cout <<"El ultimo impar ingresado es: "<<imp2;
    return 0;
}
