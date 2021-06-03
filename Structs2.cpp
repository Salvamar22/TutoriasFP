
#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;

//Corredor: Nombre, Edad, Sexo, Club.
//Juvenil <= 18 Senior <= 40 Veterano > 40
/*struct Corredor
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}cl;

int main()
{
    char categoria[20];
    cout<<"Nombre: "<<endl;
    cin.getline(cl.nombre,20,'\n');
    cout<<"Edad: "<<endl;
    cin>>cl.edad;
    fflush(stdin);
    cout<<"Sexo: "<<endl;
    cin.getline(cl.sexo,10,'\n');
    cout<<"Club: "<<endl;
    cin.getline(cl.club,20,'\n');
    
    if (cl.edad <= 18)
    {
        strcpy(categoria, "Juvenil");
    }
    else if (cl.edad <= 40)
    {
        strcpy(categoria, "Senior");
    }
    else 
    {
        strcpy(categoria, "Veterano");
    }

    cout<<"\n\nDatos del corredor: "<<endl;
    cout<<"Nombre: "<<cl.nombre<<endl;
    cout<<"Edad: "<<cl.edad<<endl;
    cout<<"Sexo: "<<cl.sexo<<endl;
    cout<<"Club: "<<cl.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    
    
    getch();
    return 0;
}*/

//EMPLEADOS Y SALARIOS MAYOR O MENOR SALARIO 

struct Empleado
{
    char nombre[20];
    float salario;
}emp[100];

int main()
{
    int nEmpleados, posM=0,posm=0;
    float mayor=0, menor = 999999;

    cout<<"Digite el numero de empleados que desee: "<<endl;
    cin>>nEmpleados;
     for (int i = 0; i < nEmpleados; i++)
     {
         fflush(stdin);
         cout<<i+1<<" Digite su nombre: "<<endl;
         cin.getline(emp[i].nombre,20,'\n');
         cout<<i+1<<" Digite su salario: "<<endl;
         cin>>emp[i].salario;

         if(emp[i].salario > mayor)
         {
             mayor = emp[i].salario;
             posm = i;
         }
         if (emp[i].salario < menor)
         {
             menor = emp[i].salario;
             posm = i;
         }
         cout<<"\n";
     }

     //IMPRIMIR DATOS
     cout<<"\n.:Datos del empleado con menor salario:.\n";
     cout<<"Nombre: "<<emp[posM].nombre<<endl;
     cout<<"Salario: "<<emp[posM].salario<<endl;

     cout<<"\n.:Datos del empleado con mayor salario:.\n";
     cout<<"Nombre: "<<emp[posm].nombre<<endl;
     cout<<"Salario: "<<emp[posm].salario<<endl;
     
    getch();
    return 0;
}



