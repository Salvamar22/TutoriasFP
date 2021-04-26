//Suma de potencias 2^1+2^2+2^3....+2^n

#include "iostream"
#include "stdlib.h"
#include "math.h"

using namespace std;

int main()
{
    int suma = 0, potencia = 0, n;

    cout<<"Digite el numero de elementos a sumar"<<endl;
    cin>>n; cout<<"\n";
    cout<<"Potencias: "<<endl;
    for (int i = 1; i <= n; i++)
    {
        potencia = pow(2,i);
        cout<<potencia<<endl;
        suma += potencia;
    }
    cout<<"Suma de sus potenicas = "<<suma<<endl;
    system("pause");
    return 0;
    
}