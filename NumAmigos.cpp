//Crear un programa que diga si dos numero son amigos por ejemplo 220 y 284 (son amigos por que al descomponerse en sus factores primos la suma de ellos es el resultado del numero amigo).

#include "iostream"
#include "cstdlib"
#include "stdio.h"

using namespace std;

int main()
{
    int num1, num2;
    num1 = 0;
    num2 = 0;
    int div1 = 0;
    int div2 = 0;
     cout<<"Ingrese su primer numero"<<endl;
     cin>>num1;
     cout<<"Ingrese su segundo numero"<<endl;
     cin>>num2;

     for (int i = 1; i <= num1/2; i++)
     {
         if(num1 % i == 0) div1 += i;

     }
    
     for (int i = 1; i <= num2/2; i++)
     {
         if(num2 % i == 0) div2 += i;  
     }

     if (num1 == div2 && num2 == div1)
     {
         cout<<"Son amigos "<<num1<<" y "<<num2<<endl;
     }
     else
     {
         cout<<"No son amigos "<<num1<<" y "<<num2<<endl;
     }
     

}