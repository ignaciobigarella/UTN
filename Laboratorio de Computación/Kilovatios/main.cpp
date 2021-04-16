#include <iostream>

using namespace std;

int main()
{
    int loc=1, i=0, num=1, kv=1, precioConsumo, numMax1, numMax2, numMax3, total1=0, total2=0, total3=0, kvMax=0, kvMin=1, numMin;
    bool vLoc=0;
    while (num!=0) {
        cout<<"Ingrese numero de cliente: ";
        cin>>num;
        cout<<"Ingrese localidad (1,2 o 3): ";
        cin>>loc;
        while (vLoc==0) {
            if (loc!=1 && loc!=2 && loc!=3) {
                cout<<"Por favor ingrese una localidad valida: ";
                cin>>loc;
                }
            else (vLoc=1);
        }
        cout<<"Ingrese la cantidad de kilovatios consumidos: ";
        cin>>kv;
        i++;
        if (i==1) {
            kvMin=kv;
            numMin=num;
        }
        else if (kv<kvMin && kv!=0) {
            kvMin=kv;
            numMin=num;
        }
        if (kv<=100) precioConsumo=10*kv+100;
        if (kv>100 && kv<=200) precioConsumo=12*kv+100;
        if (kv>200) precioConsumo=15*kv+100;
        if (loc==1) {
            if (kv>kvMax) {
                numMax1=num;
                kvMax=kv;
            }
            total1+=precioConsumo;
        }
        if (loc==2) {
            if (kv>kvMax) {
                numMax2=num;
                kvMax=kv;
            }
            total2+=precioConsumo;
        }
        if (loc==3) {
            if (kv>kvMax) {
                numMax3=num;
                kvMax=kv;
            }
            total3+=precioConsumo;
        }
    }
    cout<<"El numero de cliente con la mayor cantidad de KV consumidos en localidad 1 es: "<<numMax1<<"\n";
    cout<<"El numero de cliente con la mayor cantidad de KV consumidos en localidad 2 es: "<<numMax2<<"\n";
    cout<<"El numero de cliente con la mayor cantidad de KV consumidos en localidad 3 es: "<<numMax3<<"\n";
    cout<<"Total recaudado en localidad 1: "<<total1<<"\n";
    cout<<"Total recaudado en localidad 2: "<<total2<<"\n";
    cout<<"Total recaudado en localidad 3: "<<total3<<"\n";
    cout<<"El numero de cliente que consumio menos kilovatios es: "<<numMin;
}
