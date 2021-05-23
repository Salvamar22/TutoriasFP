//Programa que identifica la frecuencias de numeros en un arreglo.

#include "iostream"
#include "ctime"
#include "cstdlib"
#include "iomanip"

using namespace std;

void Cuenta(int Vec[], int longitud, int cn)
{
    int numero = 0;
    int repeticion;
    for (int i = 0; i < longitud; i++)
    {
        if (cn == Vec[i])
        {
            numero++;
            repeticion = Vec[i];
        }
        
    }
    cout<<"El numero "<<setw(3)<< repeticion <<" Se repite "<<setw(2)<< numero <<" veces "<<endl;
}
void Eliminar(int Vec[], int longitud, int cn)//contador n
{
    for (int i = 0; i < longitud; i++)
    {
        if (cn == Vec[i])
        {
            Vec[i] = 0;
        }
    }
    
}
void program()
{
    int cantidad;
    int Vec[100];
    cout<<"Ingrese cantidad de numeros de su arreglo"<<endl;
    cin>>cantidad;
    srand(time(0));
    int n;
    for (int i = 0; i < cantidad; i++)
    {
        Vec[i] = 1 + rand() % 15;
    }
    for(int i = 0; i < cantidad; i++)
    {
        cout<<Vec[i]<<" ";
    } cout<<endl;
    for (int i = 0; i < cantidad; i++)
    {
        n =Vec[i];
        if (n != 0)
        {
            Cuenta(Vec, cantidad, n);
            Eliminar(Vec, cantidad, n);
        }
        

    }
    
    
}

int main()
{
    program();
    return 0;
}