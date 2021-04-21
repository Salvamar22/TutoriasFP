#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<vector> //Declaracion de librerias

using namespace std;
//SUBMENU
void submenu(){
    int opcionSubmenu;
    int opcionInventario,opcionProducto;
	float precioProducto[50];
	string nombreProducto[50];
	string nombre[50];
	string dui[50];
	int a,c =0;
	int n,d =0;
    cout<<"\n Seleccione una opcion: \n";
	cout<<"\n 1.Inventario de productos\n \n 2.Crear usuario de cliente\n \n 3.Facturacion\n \n 4.Salir\n";
	cin>>opcionSubmenu;
    switch (opcionSubmenu)
    {
    case 1:
    //INVENTARIO
	do
	{
    cout<<"\nINVENTARIO\n"; //Inventario de la tienda
					cout<<"\n Seleccione una opcion: \n";
					cout<<"\n 1.Actualizar inventario de productos\n \n 2.Ver inventario de productos\n \n 3.Salir\n";
					cin>>opcionInventario;
					
						switch(opcionInventario)
					{
						case 1:
						do
						{
						cout<<"\n CREAR/ACTUALIZAR INVENTARIO DE PRODUCTOS\n"; //Entrar para crear o actualizar el inventario
							
								cout<<"\n Desea ingresar un producto? \n";
				            cout<<"\n 1. Si \n \n 2. No\n"<<endl;
				            cin>>opcionProducto;
				            
				            switch (opcionProducto)
							{
							case 1:
							cout<<"\n Limite de cantidad de productos'10' \n";
				            cout<<"\n Cuantos productos desea ingresar? \n";
				            cin>>c;
							for(a=0;a<c;a++){ //Bucle para ingresar los productos y los precios
				            		cout<<"\nIngrese el nombre del producto "<<a + 1<<": "; 
	                                cin>>nombreProducto[a];	
	                                cout<<"\nIngrese el precio del producto "<<a + 1<<": $"; 
	                                cin>>precioProducto[a];
								}
								break;
							case 2:
							cout<<"Salir"<<endl;
							break;
							default:
							cout<<"Vuelva a intentarlo"<<endl;
							break;
							}
				            
						} while (opcionProducto != 2);
							
							

						break;
					
					    case 2:
							cout<<"\n VER INVENTARIO DE PRODUCTOS\n"; //Ver los productos ya ingresados en el inventario
							for (a=0; a<c; a++)
							{
			                    cout<<"\nNombre del producto "<<a + 1<<": "<<nombreProducto[a]<<endl;
			                    cout.precision(1);
			                    cout<<"Precio del producto "<<a + 1<<": $"<<precioProducto[a]<<endl;
	                        }
							break;
					}

					}
					while (opcionInventario != 3);	
        break;
		//CREAR USUARIO
    case 2:
	int l;
	do
	{ cout<<"\n 1. Registrar cliente \n";
	cout<<"\n 2. salir \n";
	cin>>l;

	switch (l)
	{
		
	case 1:

	for (a = 0; a < 1; a++)
	{
	cout<<"Nombre del cliente"<<a + 1<<endl;
	cin>>nombre[a];
	cout<<"Numero de dui"<<a + 1<<endl;
	cin>>dui[a];
	}
	break;

	case 2:
		break;
	
	default:
		break;
	}
	
	
	} while (l != 2);

        break;

    case 3:
	cout<<"Factura"<<endl;
	cout<<"Cliente"<<nombre[a]<<endl;
	cout<<"Cliente"<<dui[a]<<endl;
	cout<<"Productos"<<nombreProducto[a]<<endl;
	cout<<"Productos"<<precioProducto[a]<<endl;	
    break;
    default:
        break;
    }
}

//MENU
void menu()
{
    int opcionMenu;
   	//declaracion de variables
    do
    {
    cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA\n"; //Menu principal para elegir local/tienda
	cout<<"\n Seleccione el local de ferreteria en la que se encuentra: \n";
	cout<<"\n 1. Ferreteria La Palma San Salvador\n";
	cout<<"\n 2. Ferreteria La Palma Soyapango\n";
	cout<<"\n 3. Ferreteria La Palma San Miguel\n";
	cout<<"\n 4. Ferreteria La Palma Santa tecla\n";
	cout<<"\n 5. Salir del programa\n";
	cin>>opcionMenu;
    switch (opcionMenu)
    {
    case 1:
        cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SAN SALVADOR\n"; //Submenu opciones de la tiendas
			submenu();
        break;
        case 2:
        cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SOYAPANGO\n"; //Submenu opciones de la tiendas
			submenu();
        break;
        case 3:
        cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SAN MIGUEL\n"; //Submenu opciones de la tiendas
			submenu();
        break;
        case 4:
        cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SANTA TECLA\n"; //Submenu opciones de la tiendas
			submenu();
        break;
    
    default:
        break;
    }

    } while (opcionMenu != 5 );
    

}


int main()
{
    menu();
    return 0;
}