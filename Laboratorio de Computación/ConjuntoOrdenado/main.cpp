#include <iostream>

using namespace std;

int main()
{
    int n, i=1, ordenado=0, numAnt;
    for (i=1; i<=8; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (ordenado==0) {
            numAnt=n;
            ordenado=1;
        }
        else if (n>=numAnt && ordenado!=2) {
            ordenado=1;
        }
        else {
            ordenado=2;
        }
    }
    switch(ordenado) {
    case 1:
        cout<<"Conjunto ordenado";
        break;
    case 2:
        cout<<"Conjunto desordenado";
        break;
    }
    return 0;
}
