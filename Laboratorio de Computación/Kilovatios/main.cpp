#include <iostream>

using namespace std;

int main()
{
    int n1, cien, doscientos, mas;
    cout<<"Ingrese cantidad de kilovatios consumidos: ";
    cin>>n1;
    cien=n1*10;
    doscientos=n1*12;
    mas=n1*15;
    while (n1<0) {
        cout<<"Ingrese un numero de consumo valido: ";
        cin>>n1;
        }
    if (n1<=100&&n1>0) {
        cout<<"El precio a pagar es de: ";
        cout<<cien;
    }
    else if (n1>100&&n1<=200) {
        cout<<"El precio a pagar es de: ";
        cout<<doscientos;
    }
    else if (n1>200) {
        cout<<"El precio a pagar es de: ";
        cout<<mas;
    }
    else if (n1==0) {
        cout<<"No debe abonar nada, ya que no hubo consumo";
    }
    return 0;
}
