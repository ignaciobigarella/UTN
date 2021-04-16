#include <iostream>

using namespace std;

int main()
{
    int i=1, maxVal, minVal, n, m;

    cout<<"Ingrese el valor deseado: ";
    cin>>n;
    cout<<"Ingrese el segundo valor deseado: ";
    cin>>m;
    if (n>m) {
            maxVal=n;
            minVal=m;
    }
    else {
            maxVal=m;
            minVal=n;
    }
    cout<<minVal;
    while(maxVal!=minVal) {
            cout<<minVal<<"\n";
            minVal++;
    }
    return 0;
}
