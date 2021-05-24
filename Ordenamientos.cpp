//Ordenar numeros de mayor a menor y viceversa

#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
    /*int numeros[] = {4,5,1,3,2};
    int i,j,aux;

    for(i = 0; i < 5; i++){
        for (j = 0;j < 5; j++)
        {
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
        
    }
    
    cout<<"Orden ascendente: ";
    for (i = 0; i < 5; i++)
    {
        cout<<"\n"<<numeros[i];
    }

     cout<<"\nOrden descendente: ";
    for (i = 4; i >= 0; i--)
    {
        cout<<"\n"<<numeros[i];
    }

    getch();
    return 0;*/

    int numeros[] = {1,3,2,5,4,7,6,9,8};
    int i, pos, aux;

    
    for (i = 0; i < 9; i++)
    {
        pos =i;
        aux = numeros[i];    

        while ((pos > 0) && (numeros[pos-1] > aux)){
        numeros[pos] = numeros[pos-1];
        pos --;
        }
        numeros[pos] = aux;
    }

    cout<<"Orden Ascendente: ";
    for (i = 0; i < 9; i++)
    {
        cout<<"\n"<<numeros[i]<<" ";
    }
    cout<<"\nOrden Descendente: ";
    for (i = 8; i >= 0; i--)
    {
        cout<<"\n"<<numeros[i]<<" ";
    }
    
    getch();
    return 0;
    
}
