//Realice un programa que ingrese datos de empleados con sus respectivos sueldos y descuentos mostrando el imforme del empleado y la planilla de empleados (a traves de un menu)
//Tome en cuenta que el ISS 3.5% y la Renta es el 10%

#include "iostream"
using namespace std;

const int longCad = 20;
struct
{
    char nombreEmpleado[longCad +1][50];
    float sueldo[50];
    int dui[50];
} empleado;

void informacion(int nEmpleados)
{
    cout<<"\nInformacion de empleados"<<endl;
    for (int i = 0; i < nEmpleados; i++)
    {   
        cout<<"Ingrese el nombre del empleado: "<< i+1 << ": ";
        cin >> empleado.nombreEmpleado[i];
        cout<<"Ingrese el sueldo de su empleado en dolares: $";
        cin >> empleado.sueldo[i];
        cout<<"Ingrese el dui del empleado: ";
        cin >> empleado.dui[i];

    }
    return;
    
}
void informe(int nEmpleados)
{
    cout<<"\tVer empleados"<<endl;
    for (int i = 0; i < nEmpleados; i++)
    {
        cout<<"Nombre del empleado: "<< empleado.nombreEmpleado[i]<<endl;
        cout<<"Sueldo base: "<< empleado.sueldo[i]<<endl;
        cout<<"DUI del empleado: "<< empleado.dui[i]<<endl;
    }
    return;
    
}
//Sueldos con descuentos de renta y seguro
void planilla(int nEmpleados)
{
    cout<<"\tTu planilla de empleados"<<endl;
    float t;
    for (int i = 0; i < nEmpleados; i++)
    {
        cout<<"Nombre del empleado: "<<empleado.nombreEmpleado[i]<<endl;
        t = empleado.sueldo[i] * 0.135;//t = al descuento del seguro y la renta de una vez
        cout<<"Sueldo Bruto: "<<empleado.sueldo[i]<<endl;
        cout<<"Descuento de ISS (3.5%) y Renta (10%): "<<t<<endl;
        cout<<"Sueldo Neto: "<<empleado.sueldo[i]-t<<endl;
        cout<<"Dui del empleado: "<< empleado.dui[i]<<endl;


    }
    
}
void menu()
{
    int nEmpleados=0;
    int opcMenu;
    do
    {   
        cout<<"\nBienvenido: \n";
        cout<<"\nSeleccione una opcion: \n";
        cout<<"\n1.Ingresar datos de empleado. \n";
        cout<<"\n2.Ver informe de empleado. \n";
        cout<<"\n3.Ver planilla de empleados. \n";
        cout<<"\n4.Salir. \n";
        cin>>opcMenu;
        switch (opcMenu)
        {
        case 1:
            cout<<"Cantidad de empleados"<<endl;
            cin>>nEmpleados;
            informacion(nEmpleados);
            break;
        case 2:
            informe(nEmpleados);
            break;
        case 3:
            planilla(nEmpleados);
            break;
        case 4:
        cout<<"Tenga un feliz dia"<<endl;
            break;

        default:
        cout<<"Opcion invalida, intentelo de nuevo"<<endl;
            break;
        }
    }while (opcMenu != 4);
    
    
}
int main()
{
    menu();
    return 0;
}
