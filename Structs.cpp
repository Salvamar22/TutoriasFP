//Estructuras o structs 
#include "iostream"
#include "conio.h"

using namespace std;
//DATOS QUEMADOS
/*struct Persona 
{
    char nombre[30];
    int edad;
}
persona1 = {"Miguel",25},
persona2 = {"Maria",28},
persona3 = {"Ramon",18};

int main(){
    cout<<"Nombre de persona #1: "<<persona1.nombre<<endl;
    cout<<"Edad persona #1: "<<persona1.edad<<" anios"<<endl;
    cout<<"Nombre de persona #2: "<<persona2.nombre<<endl;
    cout<<"Edad persona #2: "<<persona2.edad<<" anios"<<endl;
    cout<<"Nombre de persona #3: "<<persona3.nombre<<endl;
    cout<<"Edad persona #3: "<<persona3.edad<<" anios"<<endl;


    getch();
    return 0;
}*/

struct direccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct direccion direccion_empleado;
    double salario;
}empleados[2];

int main()
{   
    //RECORRIENDO FOR PARA INGRESAR LOS DATOS
    for (int i = 0; i <= 2; i++)
    {
        cout<<"Nombre del empleado: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Direccion empleado: ";
        cin.getline(empleados[i].direccion_empleado.direccion,30,'\n');
        cout<<"Ciudad empleado: ";
        cin.getline(empleados[i].direccion_empleado.ciudad,20,'\n');
        cout<<"Provincia empleado: ";
        cin.getline(empleados[i].direccion_empleado.provincia,20,'\n');
        cout<<"Salario empleado: ";
        cin>>empleados[i].salario;
        cout<<"\n";   
    }

    //FOR PARA IMRPIMIR LOS DATOS
    for ( int i = 0; i < 2; i++)
    {
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].direccion_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].direccion_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].direccion_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<"\n";
    }
    
    
    
    getch();
    return 0;
}


