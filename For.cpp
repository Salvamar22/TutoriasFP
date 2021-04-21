//IMPLEMENTANDO BUCLE FOR
#include "iostream"
#include "conio.h"
#include <stdio.h>
using namespace std;

int main()
{
// BUCLE FOR 

    /*
   int i,e;
   for(i = 1;i <= 10; i++)
   {
       cout<<i<<endl;
   }
    for(e = 10;e >= 1; e--)
   {
       cout<<e<<endl;
   }
   return 0;
  */

// TABLAS DE MULTIPLICAR
    /*
    int number;

    do
    {
    cout<<"Ingrese el numero de la tabla de multiplicar que desea ver? \n Tabla: "<<endl;
    cin>>number;

    } while ((number < 1)||(number > 10));
    cout<<"La tabla del "<<number<<"es: "<<endl;
    for (int i = 0; i <= 10 ; i++)
    {   
    cout<<number<<"*"<<i<<" = "<<number * i<<endl;
    }
    cout<<"\n\n";
    system("pause");
    return 0;
    */

   //CALCULE EL VALOR DE:  1+2+3+4+....+n
   int n,i, suma=0;

   cout<<"Digite el numero de elementos"<<endl;
   cin>>n;

   for (i = 1; i <= n; i++)
   {
       suma += i;
   }
   cout<<"\nLa suma de los primeros "<<n<< " numeros es:"<<suma<<endl;
   getch();
   return 0; 
   

}


