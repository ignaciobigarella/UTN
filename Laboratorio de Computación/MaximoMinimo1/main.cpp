#include <iostream>

using namespace std;

int main()
{
    int i=1, maxN=0, n, minN=0;
    for (i=1; i<=10; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (i==1) {
            maxN=n;
            minN=n;
        }
        else if (n>maxN) {
            maxN=n;
        }
        else if (n<minN) {
            minN=n;
        }
        }
    cout<<"El mayor numero de los ingresados es el: "<<maxN<<"\n";
    cout<<"El menor numero de los ingresados es el: "<<minN;
    return 0;
}
