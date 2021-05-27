//Busqueda binaria
#include "iostream"
#include "conio.h"

using namespace std;

int main()
{   //Declaracion de variables
    int numeros[50];
    int inferior, superior,mitad, dato;
    char bandera = 'F';
    int a;
    
    cout<<"Digite la cantidad de numeros que tendra su arreglo 1: (maximo 50)"<<endl;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cout<<"Digite su numero "<<i+1<<":"<<endl;
        cin>> numeros[i];
    }
    
    cout<<"Ingrese el numero que desea buscar"<<endl;
    cin>>dato;
    //dato = 4;

    //Algoritmo de busqueda 
    inferior=1;
    superior=9;

    while (inferior <= superior)
    {
        mitad = (inferior+superior)/2;

        if (numeros[mitad] == dato)
        {
            bandera = 'V';
            break;
        }
        
        if (numeros[mitad] > dato)
        {
            superior = mitad;
            mitad = (inferior+superior)/2;
        }
        if (numeros[mitad] < dato)
        {
            inferior = mitad;
            mitad = (inferior+superior)/2;
        }
        
    }

    if (bandera == 'V')
    {
        cout<<"El numero ha sido encontrado en la posicion: "<<mitad+1<<endl;
    }
    else
    {
        cout<<"El numero no ha sido encontrado"<<endl;
    }
    

    getch();
    return 0;

}