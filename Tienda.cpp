//Realice un programa que sea una tienda donde podamos almacenar productos y precios y mostrar una factura al cliente.

#include "iostream"
using namespace std;

const int longCad=20;

struct
{  
    char nombreArticulo [longCad+1][50];
    int cantidad[50];
    float precio[50];
    float costoArticulo[50];

}tienda;

void informacion(int nArticulos)
{
    cout<<"\tInformacion de los productos"<<endl;
    for (int i = 0; i < nArticulos; i++)
    {   cin.ignore();
        cout<<"Ingrese el nombre del articulo "<< i+1 <<": "<<endl;
        cin >> tienda.nombreArticulo[i];
        cout<<"Ingrese la cantidad de articulos que desea: "<<endl;
        cin >> tienda.cantidad[i];
        cout<<"Ingrese el preico por unidad de su articulo: "<<endl;
        cin >> tienda.costoArticulo[i];
    }
    return;
}

void precios(int nArticulos)
{
    for (int i = 0; i < nArticulos; i++)
    {
        tienda.precio[i]=tienda.costoArticulo[i]*tienda.cantidad[i];
    }
    return;
}
void subtotal(int nArticulos)
{
    cout<<"\t Resultados de los productos: "<<endl;
    for (int i = 0; i < nArticulos; i++)
    {
        cout << "Producto: "<< tienda.nombreArticulo[i]<<endl;
        cout << "Cantidad: "<< tienda.cantidad[i]<<endl;
        cout << "Costo por articulo: $"<<tienda.precio[i]<<endl; 
    }
    return;
}
void total(int nArticulos)
{
    cout<< "Total de tu cuenta: "<<endl;
    float total;
    float iva;
    for (int i = 0; i < nArticulos; i++)
    {
        total+=tienda.precio[i];
    }
    cout<<"\tTotal sin iva....$"<<total<<endl;
    iva = total*0.13;
    cout<<"\nIva.....$"<<iva<<endl;
    cout<<"\nTotal de su cuenta.....$"<<total+iva<<endl;
}
void program()
{
    int nArticulos=0;
    cout<<"Cantidad de articulos (50 maximo)"<<endl;
    cin>>nArticulos;
    informacion(nArticulos);
    precios(nArticulos);
    subtotal(nArticulos);
    total(nArticulos);

}
int main()
{
program();
}