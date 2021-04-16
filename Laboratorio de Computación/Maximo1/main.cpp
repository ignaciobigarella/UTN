#include <iostream>

using namespace std;

int main()
{
    int i=1, maxN=0, n;
    for (i=1; i<=10; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (n>maxN) {
            maxN=n;
        }
        else maxN=maxN;
    }
    cout<<"El mayor numero de los ingresados es el: "<<maxN;
    return 0;
}
