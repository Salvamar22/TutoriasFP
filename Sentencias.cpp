//SENTENCIAS CONDICIONALES & BUCLES

#include "iostream"
#include "math.h"
#include "conio.h"
using namespace std;

int main()

{ //IMPLEMENTACION DE LA SENTENCIA IF ELSE (SABER SI ES MAYOR DE EDAD)
    /*int edad;
cout<<"Ingrese su edad"<<endl;
cin>>edad;

if (edad > 18)
{
    cout<<"Eres mayor de 18 anios"<<endl;
}
else
{
    cout<<"Lo sentimos no tienes la edad suficiente"<<endl;
}
    //sentencia if */

 //SABER SI UN NUMERO ES MAYOR QUE OTRO (USANDO 3 VARIABLES)
    /*int A=0, B=0, C=0;
    cout<<"Ingrese tres numeros"<<endl;
    cin>>A>>B>>C;
    if (A > B)
    {
        cout<<"A es mayor que B" <<endl;
    }
    else
    {
         cout<<"B es mayor que A" <<endl;
    }
    if (A > C)
    {
        cout<<"A es mayor que C" <<endl;
    }
    else
    {
         cout<<"C es mayor que A" <<endl;
    }
    if (C > B)
    {
        cout<<"C es mayor que B" <<endl;
    }
    else
    {
         cout<<"B es mayor que C" <<endl;
    }*/
//IDENTIFICAR SI UN NUMERO ES PAR O IMPAR
/*
int x;
cout<<"Ingrese su numero"<<endl;
cin>>x;

if (x>0)
{
    cout<<"El numero es natural"<<endl;
}

else if (x%2==0)
{
    cout<<"El numero es par"<<endl;
}

else
{
    cout<<"Numero es impar"<<endl;
} 
*/
//IMPLEMENTACION DE LA SENTENCIA SWITCH
/*int num;
cout<<"Ingrese un numero entre 1 y 5"<<endl;
cin>>num;

switch (num)
{
case 1: 
cout<<"Este es el primer caso"<<endl;   
break;

case 2:  
cout<<"Este es el segundo caso"<<endl;  
break;

case 3: 
cout<<"Este es el tercer caso"<<endl;   
break;

case 4:    
cout<<"Este es el cuarto caso"<<endl;
break;

case 5:    
cout<<"Este es el quinto caso"<<endl;
break;

default:
    break;
}*/
//SENTENCIA SWITCH VOCALES
/*char vocal;
cout<<"Ingrese su vocal"<<endl;
cin>>vocal;
//queremos saber si la vocal es minuscula o no
switch (vocal)
{
    case 'a':
    cout<<"Su vocal es minuscula"<<endl;
    break;
    case 'e':
    cout<<"Su vocal es minuscula"<<endl;
    break;
    case 'i':
    cout<<"Su vocal es minuscula"<<endl;
    break;
    case 'o':
    cout<<"Su vocal es minuscula"<<endl;
    break;
    case 'u':
    cout<<"Su vocal es minuscula"<<endl;
    break;

    default:
    cout<<"No es una vocal minuscula."<<endl;
    break;
}*/
return 0;
    

}
