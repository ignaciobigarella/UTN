#include <iostream>

using namespace std;

int main()
{
    int i=1, n;
    cout<<"Ingrese el numero deseado: ";
    cin>>n;
    for (i=1; i<=n; i++)
    if (n%i==0 && i%2==0) {
        cout<<"Es divisor par el numero: "<<i<<"\n";
    }
}
