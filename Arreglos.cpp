// Introduciendonos al mundo de los arreglos

#include "iostream"
#include "vector"
#include "stdio.h"
#include "conio.h"
using namespace std;
int main ()
{
  /*  //DATOS QUEMADOS
   int array1[]={1,2,3,4,5};
   string array2[]= {"hola","holita","bienvenido","adios","adiosito"};
   char array3[]={'a','e','i','o','u'};
   float array4[]={1.1,1.2,1.3,1.4,1.5};
   //DATOS NO QUEMADOS
    int array5[50];
    string array6[50];
    char array7[50];
    float array8[50];
    int a,b,c,d;
    //Pidiendo datos al usuario
    cout<<"Digite la cantidad de numeros que tendra su arreglo 1: (maximo 50)"<<endl;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cout<<"Digite su numero "<<i+1<<":"<<endl;
        cin>> array5[i];
    }
    cout<<"Digite la cantidad de palabras que tendra su arreglo 2: (maximo 50)"<<endl;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        cout<<"Digite su palabra "<<i+1<<":"<<endl;
        cin>> array6[i];
    }
    cout<<"Digite la cantidad de letras que tendra su arreglo 3: (maximo 50)"<<endl;
    cin>>c;
    for (int i = 0; i < c; i++)
    {
        cout<<"Digite su letra "<<i+1<<":"<<endl;
        cin>> array7[i];
    }
     cout<<"Digite la cantidad de flotantes que tendra su arreglo 4: (maximo 50)"<<endl;
    cin>>d;
    for (int i = 0; i < d; i++)
    {
        cout<<"Digite su numero "<<i+1<<":"<<endl;
        cin>> array8[i];
    }


    //Imprimiendo arr 1 no quemado
    for (int i = 0; i < a; i++)
    {
    cout<<"Primer arreglo no quemado: "<<array5[i]<<endl;
    }
    //Imprimiendo arr 2 no quemado
    for (int i = 0; i < b; i++)
    {
    cout<<"Segundo arreglo no quemado: "<<array6[i]<<endl;
    }
     //Imprimiendo arr 3 no quemado
    for (int i = 0; i < c; i++)
    {
    cout<<"Tercero arreglo no quemado: "<<array7[i]<<endl;
    }
     //Imprimiendo arr 4 no quemado
    for (int i = 0; i < d; i++)
    {
    cout<<"Cuarto arreglo no quemado: "<<array8[i]<<endl;
    }

//Para poder imprimir un arreglo debe ser a traves de un for (porque primero debe recorrerse)

for (int i = 0; i < 5; i++)
{
    cout<<"Primer arreglo: "<<array1[i]<<endl;
}
for (int i = 0; i < 5; i++)
{
   cout<<"Segundo arreglo: "<<array2[i]<<endl;
}
for (int i = 0; i < 5; i++)
{
   cout<<"Tercero arreglo: "<<array3[i]<<endl;
}
for (int i = 0; i < 5; i++)
{
   cout<<"Cuarto arreglo: "<<array4[i]<<endl;
}
*/
/*
//SUMAR ELEMENTOS DE UN ARREGLO
float numeros[] = {1,2,3,4,5};
float suma = 0;
for (int i = 0; i < 5; i++)
{
    suma += numeros[i];
    cout<<"Numero: "<<numeros[i]<<endl;
}
cout<<"La suma de los numeros es: "<<suma<<endl;
   return 0;*/

   //BUSCAR EL MAYOR ELEMENTO DE UN ARREGLO

   int numeros[100];
   int n, mayor = 0;
   cout<<"Digite el numero de elementos del arreglo: "<<endl;
   cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<" Digite un numero "<<":"<<endl;
        cin>> numeros[i];

        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        
    }
    cout<<"El numero mayor es: "<<mayor<<endl;
    getch();
    return 0;




}