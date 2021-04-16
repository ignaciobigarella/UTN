#include <iostream>

using namespace std;

int main()
{
    int cantidad, mil, quinientos, doscientos, cien;
    cout<<"Ingrese cantidad de dinero a retirar: ";
    cin>>cantidad;
    if (cantidad%100==0) {
        cout<<"Usted debe retirar: ";
        mil=cantidad/1000;
        cout<<mil;
        cout<<" billetes de 1000, ";
        quinientos=cantidad%1000/500;
        cout<<quinientos;
        cout<<" billetes de 500, ";
        doscientos=cantidad%500/200;
        cout<<doscientos;
        cout<<" billetes de 200, ";
        cien=cantidad%500%200/100;
        cout<<cien;
        cout<<" billetes de 100.";
    }
    else {
        cout<<"Recuerde que el cajero entrega billetes minimo de $100";
    }
    return 0;
}
