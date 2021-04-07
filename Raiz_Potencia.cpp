/*Realice un programa que efectue la raiz y la potencia a ciertos numeros */

#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    float a,b,raiz1,potencia1,raiz2,potencia2;

    cout<<"Digite su primer numero"<<endl;
    cin>>a;
    cout<<"Digite su segundo numero"<<endl;
    cin>>b;

    raiz1=(sqrt(a));
    raiz2=(sqrt(b));
    
    potencia1=(pow(a,3));
    potencia2=(pow(b,3));

    cout<<"Raiz de: "<<a<<" = "<< raiz1<<endl;
    cout<<"Raiz de: "<<b<<" = "<< raiz2<<endl;
    cout<<"Potencia de: "<<a<<" = "<< potencia1<<endl;
    cout<<"Potencia de: "<<b<<" = "<< potencia2<<endl;




    return 0;
}




