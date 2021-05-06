/*Hacer un programa para rellenar una matriz pidiendo al usuario el numero de columnas y mostrarla
*/

#include "iostream"
#include "conio.h"

using namespace std;
/*
void program()
{   //Declaracion de variables
    int matriz[100][100],  filas, columnas;
    //Insertar filas columnas
     cout<<"Ingrese numero de filas"<<endl;
    cin>>filas;
    cout<<"Ingrese numero de columnas"<<endl;
    cin>>columnas;
    
    //Almacenar datos de la matriz

    for (int i = 0; i <filas; i++){
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Digite un numero["<<i<<"]["<<j<<"]";
                cin>>matriz[i][j];
        }
    }
    //Mostrar matriz

    for (int i = 0; i <filas; i++){
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }
    getch();
    
}
*/
//Matriz transpuesta
/*
1 2 3       1 4 7 
4 5 6 --->  2 5 8
7 8 9       3 6 9

*/
void program()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            //llenando matriz
           cout<<"Digite un numero["<<i<<"]["<<j<<"]";
            cin>>matriz[i][j];
        }
        }
     
        //mostrando matriz original
        cout<<"Matriz original"<<endl;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
            cout<<matriz[i][j];
            }
        cout<<"\n";
        }
        //mostrando transpuesta
        cout<<"Matriz transpuesta"<<endl;
        for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matriz[j][i];
            }
        }
        getch();
    
    
}
int main()
{
  
    program();
    return 0;
    
}

