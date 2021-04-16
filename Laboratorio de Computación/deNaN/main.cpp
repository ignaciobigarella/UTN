#include <iostream>

using namespace std;

int main()
{
    int i=1, n1, n2;
    cout<<"Ingrese el primer numero deseado: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero deseado: ";
    cin>>n2;
    for (i=n1; i<=n2; i++) {
        cout<<i<<"\n";
    }
    return 0;
}
