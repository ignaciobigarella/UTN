#include <iostream>

using namespace std;

int main()
{
    int n1;
    cout<<"Ingrese numero deseado: ";
    cin>>n1;
    if (n1>0) {
        cout<<"El numero es positivo";
    }
    else if (n1<0) {
        cout<<"El numero es negativo";
    }
    else {
        cout <<"El numero es 0";
    }
    return 0;
}
