//Funcion elevacion en un matriz
#include "iostream"
#include "conio.h"

using namespace std;
//Prototipos de funcion
void mostrarMatriz(int m[][4], int, int);
void calularCuadrado(int m[][4], int, int);
void mostrarMatrizElevada(int m[][4], int, int);
int main()
{
    const int NFILAS = 2;
    const int NCOLUMNAS = 4;
    int m[NFILAS][NCOLUMNAS] = {{1,2,3,3},{5,6,7,4}};

    mostrarMatriz(m,NFILAS,NCOLUMNAS);
    calularCuadrado(m,NFILAS,NCOLUMNAS);
    mostrarMatrizElevada(m,NFILAS,NCOLUMNAS);
    getch();
    return 0;

}
void mostrarMatriz(int m[][4], int nfilas, int ncolumnas)
{
    
    cout<<"MATRIZ: \n";
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncolumnas; j++)
        {
           cout<<m[i][j]<<" ";
        }
        cout<<"\n"; 
    }
    
}
void calularCuadrado(int m[][4], int nfilas, int ncolumnas)
{
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncolumnas; j++)
        {
           m[i][j] *= m[i][j]; 
        }
        cout<<"\n";
    }
}
void mostrarMatrizElevada(int m[][4], int nfilas, int ncolumnas)
{
    cout<<"Matriz Elevada al Cuarado"<<endl;
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncolumnas; j++)
        {
           cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}