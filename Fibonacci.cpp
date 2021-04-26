//Serie Fibonacci -> 1 1 2 3 5 8 13 21 ...... n
#include "iostream"
#include "stdlib.h"

using namespace std;

int main()
{
    int n, a=0, b=1, c=1;
    cout<<"Digite el numero de elementos que desea en su serie Fibonacci: "<<endl;
    cin>>n;
    cout<<"1. ";
    for (int i = 0; i < n; i++)
    {
        c = a + b; //1+1=2 1+2=3 2+3 =5 (1 1 2 3 5)
        cout<<c<<" ";//se imprime
        a = b;//1 1 2 //se va desplazando
        b = c;//1 2 3 //se va desplazando
    }
    cout<<"\n";
    system("pause");
    return 0;
}
