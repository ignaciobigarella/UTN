#include <iostream>

using namespace std;

int main()
{
    int i=1, maxNeg, n, minPos, neg=0, pos=0;
    for (i=1; i<=10; i++) {
        cout<<"Ingrese el numero "<<i<<": ";
        cin>>n;
        if (n<0 && neg==0) {
            neg++;
            maxNeg=n;
        }
        if (n>maxNeg && n<0) {
            maxNeg=n;
            }
        if (n>0 && pos==0) {
            pos++;
            minPos=n;
        }
        if (n<minPos && n>0) {
            minPos=n;
            }
        }
    cout<<"El mayor numero de los negativos es el: "<<maxNeg<<"\n";
    cout<<"El menor numero de los positivos es el: "<<minPos;
    return 0;
}
