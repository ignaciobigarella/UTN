#include <iostream>

using namespace std;

int main()
{
    int n1;
    cout<<"Ingrese el a�o a evaluar: ";
    cin>>n1;
    if (n1%4==0&&n1%100!=0) {
        cout<<"El a�o es bisiesto";
    }
    else if (n1%400==0) {
        cout<<"El a�o es bisiesto";
    }
    else {
        cout<<"El a�o no es bisiesto";
    }
    return 0;
}
