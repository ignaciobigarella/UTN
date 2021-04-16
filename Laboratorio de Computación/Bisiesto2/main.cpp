#include <iostream>

using namespace std;

int main()
{
    int n1;
    cout<<"Ingrese el año a evaluar: ";
    cin>>n1;
    if (n1%4==0&&n1%100!=0) {
        cout<<"El año es bisiesto";
    }
    else if (n1%400==0) {
        cout<<"El año es bisiesto";
    }
    else {
        cout<<"El año no es bisiesto";
    }
    return 0;
}
