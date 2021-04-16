#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    if (n1%n2==0) {
        cout << "El primer numero es multiplo del segundo";
    }
    else {
        cout << "El primer numero NO es multiplo del segundo";
    }
    return 0;
}
