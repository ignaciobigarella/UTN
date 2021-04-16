#include <iostream>

using namespace std;

int main()
{
    int n, sumaDiv=0, i=0;
    cout <<"Ingrese el numero deseado: ";
    cin>>n;
    while (n-1!=i) {
        i++;
        if (n%i==0) {
            sumaDiv+=i;
        }
    }
    if (sumaDiv==n) cout<<"Es un numero perfecto";
    else cout <<"No es un numero perfecto";
}
