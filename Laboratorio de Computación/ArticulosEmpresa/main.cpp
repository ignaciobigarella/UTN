#include <iostream>

using namespace std;

int main()
{
    int nArticulo, nClase, i=1, art1, art2, art3;
    float nPrecio, precio1=0, precio2=0, precio3=0, prom1=0, prom2=0, prom3=0;
    for (i=1;i<=10;i++) {
        cout<<"Ingrese numero de articulo (1 a 10): ";
        cin>>nArticulo;
        cout<<"Ingrese precio unitario: ";
        cin>>nPrecio;
        cout<<"Ingrese clase de articulo (1, 2, 3): ";
        cin>>nClase;
        if (nClase==1 && nPrecio>precio1) {
            precio1=nPrecio;
            art1=nArticulo;
        }
        if (nClase==2 && nPrecio>precio2) {
            precio2=nPrecio;
            art2=nArticulo;
        }
        if (nClase==3 && nPrecio>precio3) {
            precio3=nPrecio;
            art3=nArticulo;
        }
        if (nClase==1) {
            prom1=prom1+nPrecio;
        }
        if (nClase==2) {
            prom2=prom2+nPrecio;
        }
        if (nClase==3) {
            prom3=prom3+nPrecio;
        }
    }
    cout << "El articulo mas caro de la clase 1 es el: "<<art1<<"\n";
    cout << "El articulo mas caro de la clase 2 es el: "<<art2<<"\n";
    cout << "El articulo mas caro de la clase 3 es el: "<<art3<<"\n";
    if (prom1>prom2) {
        cout <<"La clase de articulo con el mayor precio promedio es la 1";
    }
    else if (prom2>prom3) {
        cout <<"La clase de articulo con el mayor precio promedio es la 2";
    }
    else {
        cout <<"La clase de articulo con el mayor precio promedio es la 3";
    }
}
