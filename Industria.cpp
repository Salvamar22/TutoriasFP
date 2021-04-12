#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h> //Declaracion de librerias

using namespace std;

int main(){
	//setlocale(LC_ALL, "spanish");
	//system("color F0");
	char opcionmenu,opcionsubmenu,opcioninventario,opcionproducto;
	float precioproducto[50];
	string nombreproducto[50];
	int existencias[10];
	int a,c =0; //declaracion de variables
	
	do{
	cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA\n"; //Menu principal para elegir local/tienda
	cout<<"\n Seleccione el local de ferreteria en la que se encuentra: \n";
	cout<<"\n 1. Ferreteria La Palma San Salvador\n";
	cout<<"\n 2. Ferreteria La Palma Soyapango\n";
	cout<<"\n 3. Ferreteria La Palma San Miguel\n";
	cout<<"\n 4. Ferreteria La Palma Santa tecla\n";
	cout<<"\n 5. Salir del programa\n";
	opcionmenu=tolower(getch());
	 //Limpiar pantalla del buffer
	
	switch(opcionmenu){
		
		case('1'):
			cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SAN SALVADOR\n"; //Submenu opciones de la tiendas
			cout<<"\n Seleccione una opcion: \n";
			cout<<"\n 1.Inventario de productos\n \n 2.Crear usuario de cliente\n \n 3.Facturacion\n \n 4.Salir\n";
			opcionsubmenu=tolower(getch());
		 //Pausa el programa 
			
			if(opcionsubmenu=='1' || opcionsubmenu=='2' || opcionsubmenu=='3'){
				
				switch(opcionsubmenu){
						
				case('1'):
					cout<<"\nBIENVENIDO AL INVENTARIO DE FERRETERIA LA PALMA SAN SALVADOR\n"; //Inventario de la tienda
					cout<<"\n Seleccione una opcion: \n";
					cout<<"\n 1.Actualizar inventario de productos\n \n 2.Ver inventario de productos\n \n 3.Salir\n";
					opcioninventario=tolower(getch());
					
					
					if(opcioninventario=='1' || opcioninventario=='2'){
					
					    switch(opcioninventario){
						
						case('1'):
							cout<<"\n CREAR/ACTUALIZAR INVENTARIO DE PRODUCTOS\n"; //Entrar para crear o actualizar el inventario
							cout<<"\n Desea ingresar un producto? \n";
				            cout<<"\n 1. Si \n \n 2. No\n"<<endl;
				            opcionproducto=tolower(getch());
				            
				            cout<<"\n Limite de cantidad de productos'10' \n";
				            cout<<"\n Cuantos productos desea ingresar? \n";
				            cin>>c;
				          
				            
				            if(opcionproducto=='1'){
				            	
				            	for(a=0;a<c;a++){ //Bucle para ingresar los productos y los precios
				            		cout<<"\nIngrese el nombre del producto "<<a + 1<<": "; 
	                                cin>>nombreproducto[a];	
	                                cout<<"\nIngrese el precio del producto "<<a + 1<<": $"; 
	                                cin>>precioproducto[a];
								}	
	
							}else if(opcionproducto=='2') {
				                cout<<"Usted ha seleccionado no."<<endl;
				                cout<<endl;
				                system("pause");
				            }else{
				                cout<<"La opcion ingresada es incorrecta."<<endl;
				                cout<<endl;
				                system("pause");
				            }
							system("pause");
							break;
						
						case('2'):
							cout<<"\n VER INVENTARIO DE PRODUCTOS\n"; //Ver los productos ya ingresados en el inventario
							for (a=0; a<c; a++){
								
			                    cout<<"\nNombre del producto "<<a + 1<<": "<<nombreproducto[a]<<endl;
			                    cout.precision(1);
	                            cout.setf(ios::fixed);
	                            cout.setf(ios::showpoint);
			                    cout<<"Precio del producto "<<a + 1<<": $"<<precioproducto[a]<<endl;
	                           	}
	
							system("pause");
							break;
							
						case('3'):
							cout<<"\n Ha seleccionado salir \n";
							system("pause");
							break;
							
						default:
							cout<<"Opcion incorrecta, por favor intentelo de nuevo";
							system("pause");
					    }
					}else if(opcioninventario=='3'){
						cout<<"\nHa seleccionado salir.\n";
						system("pause");	
					}else{
						cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					    system("pause");		
					}
					

					
					system("pause");	
					break;
						
				case('2'):
					cout<<"\nCREAR UN USUARIO AL CLIENTE\n"; //Creacion de usuario, por el momento sin funcionar
					system("pause");
					break;
							
				case('3'):
					cout<<"\nFACTURACION DE PRODUCTOS\n"; //Facturacion de los productos, por el momento sin funcionar
					system("pause");
					break;
							
				case('4'):
					cout<<"\nHa seleccionado salir.\n"; //Salir al menu princial
					system("pause");
					break;
							
				default:
					cout<<"Opcion incorrecta, por favor intentelo de nuevo"; //Validaciones para impedir que el codigo siga ejecutandose con variables erroneas
					system("pause");
							
				}

				}else if(opcionsubmenu=='4'){
					cout<<"\nHa seleccionado salir.\n";
					system("pause");
				}else{
					cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					system("pause");	
				}
			system("pause");	
			break;
				
		case('2'):
			cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SOYAPANGO \n"; //Submenu opciones de la tiendas
			cout<<"\n Seleccione una opcion: \n";
			cout<<"\n 1.Inventario de productos\n \n 2.Crear usuario de cliente\n \n 3.Facturacion\n \n 4.Salir\n";
			opcionsubmenu=tolower(getch());
		//Pausa el programa 
			
			if(opcionsubmenu=='1' || opcionsubmenu=='2' || opcionsubmenu=='3'){
				
				switch(opcionsubmenu){
						
				case('1'):
					cout<<"\nBIENVENIDO AL INVENTARIO DE FERRETERIA LA PALMA SOYAPANGO\n"; //Inventario de la tienda
					cout<<"\n Seleccione una opcion: \n";
					cout<<"\n 1.Actualizar inventario de productos\n \n 2.Ver inventario de productos\n \n 3.Salir\n";
					opcioninventario=tolower(getch());
				
					
					if(opcioninventario=='1' || opcioninventario=='2'){
					
					    switch(opcioninventario){
						
						case('1'):
							cout<<"\n CREAR/ACTUALIZAR INVENTARIO DE PRODUCTOS\n"; //Entrar para crear o actualizar el inventario
							cout<<"\n Desea ingresar un producto? \n";
				            cout<<"\n 1. Si \n \n 2. No\n"<<endl;
				            opcionproducto=tolower(getch());
				            
				            cout<<"\n Limite de cantidad de productos'10' \n";
				            cout<<"\n Cuantos productos desea ingresar? \n";
				            cin>>c;
				            
				            
				            if(opcionproducto=='1'){
				            	
				            	for(a=0;a<c;a++){ //Bucle para ingresar los productos y los precios
				            		cout<<"\nIngrese el nombre del producto "<<a + 1<<": "; 
	                                cin>>nombreproducto[a];	
	                                cout<<"\nIngrese el precio del producto "<<a + 1<<": $"; 
	                                cin>>precioproducto[a];
								}	
	
							}else if(opcionproducto=='2') {
				                cout<<"Usted ha seleccionado no."<<endl;
				                cout<<endl;
				                system("pause");
				            }else{
				                cout<<"La opcion ingresada es incorrecta."<<endl;
				                cout<<endl;
				                system("pause");
				            }
							system("pause");
							break;
						
						case('2'):
							cout<<"\n VER INVENTARIO DE PRODUCTOS\n"; //Ver los productos ya ingresados en el inventario
							for (a=0; a<c; a++){
								
			                    cout<<"\nNombre del producto "<<a + 1<<": "<<nombreproducto[a]<<endl;
			                    cout.precision(1);
	                            cout.setf(ios::fixed);
	                            cout.setf(ios::showpoint);
			                    cout<<"Precio del producto "<<a + 1<<": $"<<precioproducto[a]<<endl;
	                           	}
	
							system("pause");
							break;
							
						case('3'):
							cout<<"\n Ha seleccionado salir \n";
							system("pause");
							break;
							
						default:
							cout<<"Opcion incorrecta, por favor intentelo de nuevo";
							system("pause");
					    }
					}else if(opcioninventario=='3'){
						cout<<"\nHa seleccionado salir.\n";
						system("pause");	
					}else{
						cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					    system("pause");		
					}
					

					
					system("pause");	
					break;
						
				case('2'):
					cout<<"\nCREAR UN USUARIO AL CLIENTE\n"; //Creacion de usuario, por el momento sin funcionar
					system("pause");
					break;
							
				case('3'):
					cout<<"\nFACTURACION DE PRODUCTOS\n"; //Facturacion de los productos, por el momento sin funcionar
					system("pause");
					break;
							
				case('4'):
					cout<<"\nHa seleccionado salir.\n"; //Salir al menu princial
					system("pause");
					break;
							
				default:
					cout<<"Opcion incorrecta, por favor intentelo de nuevo"; //Validaciones para impedir que el codigo siga ejecutandose con variables erroneas
					system("pause");
							
				}

				}else if(opcionsubmenu=='4'){
					cout<<"\nHa seleccionado salir.\n";
					system("pause");
				}else{
					cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					system("pause");	
				}
			
			system("pause");
			break;
			
				
		case('3'):
			cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SAN MIGUEL\n"; //Submenu opciones de la tiendas
			cout<<"\n Seleccione una opcion: \n";
			cout<<"\n 1.Inventario de productos\n \n 2.Crear usuario de cliente\n \n 3.Facturacion\n \n 4.Salir\n";
			opcionsubmenu=tolower(getch());
			 //Pausa el programa 
			
			if(opcionsubmenu=='1' || opcionsubmenu=='2' || opcionsubmenu=='3'){
				
				switch(opcionsubmenu){
						
				case('1'):
					cout<<"\nBIENVENIDO AL INVENTARIO DE FERRETERIA LA PALMA SAN MIGUEL \n"; //Inventario de la tienda
					cout<<"\n Seleccione una opcion: \n";
					cout<<"\n 1.Actualizar inventario de productos\n \n 2.Ver inventario de productos\n \n 3.Salir\n";
					opcioninventario=tolower(getch());
					
					
					if(opcioninventario=='1' || opcioninventario=='2'){
					
					    switch(opcioninventario){
						
						case('1'):
							cout<<"\n CREAR/ACTUALIZAR INVENTARIO DE PRODUCTOS\n"; //Entrar para crear o actualizar el inventario
							cout<<"\n Desea ingresar un producto? \n";
				            cout<<"\n 1. Si \n \n 2. No\n"<<endl;
				            opcionproducto=tolower(getch());
				            
				            cout<<"\n Limite de cantidad de productos'10' \n";
				            cout<<"\n Cuantos productos desea ingresar? \n";
				            cin>>c;
				            
				            
				            if(opcionproducto=='1'){
				            	
				            	for(a=0;a<c;a++){ //Bucle para ingresar los productos y los precios
				            		cout<<"\nIngrese el nombre del producto "<<a + 1<<": "; 
	                                cin>>nombreproducto[a];	
	                                cout<<"\nIngrese el precio del producto "<<a + 1<<": $"; 
	                                cin>>precioproducto[a];
								}	
	
							}else if(opcionproducto=='2') {
				                cout<<"Usted ha seleccionado no."<<endl;
				                cout<<endl;
				                system("pause");
				            }else{
				                cout<<"La opcion ingresada es incorrecta."<<endl;
				                cout<<endl;
				                system("pause");
				            }
							system("pause");
							break;
						
						case('2'):
							cout<<"\n VER INVENTARIO DE PRODUCTOS\n"; //Ver los productos ya ingresados en el inventario
							for (a=0; a<c; a++){
								
			                    cout<<"\nNombre del producto "<<a + 1<<": "<<nombreproducto[a]<<endl;
			                    cout.precision(1);
	                            cout.setf(ios::fixed);
	                            cout.setf(ios::showpoint);
			                    cout<<"Precio del producto "<<a + 1<<": $"<<precioproducto[a]<<endl;
	                           	}
	
							system("pause");
							break;
							
						case('3'):
							cout<<"\n Ha seleccionado salir \n";
							system("pause");
							break;
							
						default:
							cout<<"Opcion incorrecta, por favor intentelo de nuevo";
							system("pause");
					    }
					}else if(opcioninventario=='3'){
						cout<<"\nHa seleccionado salir.\n";
						system("pause");	
					}else{
						cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					    system("pause");		
					}
					

					
					system("pause");	
					break;
						
				case('2'):
					cout<<"\nCREAR UN USUARIO AL CLIENTE\n"; //Creacion de usuario, por el momento sin funcionar
					system("pause");
					break;
							
				case('3'):
					cout<<"\nFACTURACION DE PRODUCTOS\n"; //Facturacion de los productos, por el momento sin funcionar
					system("pause");
					break;
							
				case('4'):
					cout<<"\nHa seleccionado salir.\n"; //Salir al menu princial
					system("pause");
					break;
							
				default:
					cout<<"Opcion incorrecta, por favor intentelo de nuevo"; //Validaciones para impedir que el codigo siga ejecutandose con variables erroneas
					system("pause");
							
				}

				}else if(opcionsubmenu=='4'){
					cout<<"\nHa seleccionado salir.\n";
					system("pause");
				}else{
					cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					system("pause");	
				}
			system("pause");
			break;
				
		case('4'):
			cout<<"\n     BIENVENIDO A FERRETERIA LA PALMA SANTA TECLA\n"; //Submenu opciones de la tiendas
			cout<<"\n Seleccione una opcion: \n";
			cout<<"\n 1.Inventario de productos\n \n 2.Crear usuario de cliente\n \n 3.Facturacion\n \n 4.Salir\n";
			opcionsubmenu=tolower(getch());
			 //Pausa el programa 
			
			if(opcionsubmenu=='1' || opcionsubmenu=='2' || opcionsubmenu=='3'){
				
				switch(opcionsubmenu){
						
				case('1'):
					cout<<"\nBIENVENIDO AL INVENTARIO DE FERRETERIA LA PALMA SANTA TECLA\n"; //Inventario de la tienda
					cout<<"\n Seleccione una opcion: \n";
					cout<<"\n 1.Actualizar inventario de productos\n \n 2.Ver inventario de productos\n \n 3.Salir\n";
					opcioninventario=tolower(getch());
					
					
					if(opcioninventario=='1' || opcioninventario=='2'){
					
					    switch(opcioninventario){
						
						case('1'):
							cout<<"\n CREAR/ACTUALIZAR INVENTARIO DE PRODUCTOS\n"; //Entrar para crear o actualizar el inventario
							cout<<"\n Desea ingresar un producto? \n";
				            cout<<"\n 1. Si \n \n 2. No\n"<<endl;
				            opcionproducto=tolower(getch());
				            
				            cout<<"\n Limite de cantidad de productos'10' \n";
				            cout<<"\n Cuantos productos desea ingresar? \n";
				            cin>>c;
				            
				            
				            if(opcionproducto=='1'){
				            	
				            	for(a=0;a<c;a++){ //Bucle para ingresar los productos y los precios
				            		cout<<"\nIngrese el nombre del producto "<<a + 1<<": "; 
	                                cin>>nombreproducto[a];	
	                                cout<<"\nIngrese el precio del producto "<<a + 1<<": $"; 
	                                cin>>precioproducto[a];
								}	
	
							}else if(opcionproducto=='2') {
				                cout<<"Usted ha seleccionado no."<<endl;
				                cout<<endl;
				                system("pause");
				            }else{
				                cout<<"La opcion ingresada es incorrecta."<<endl;
				                cout<<endl;
				                system("pause");
				            }
							system("pause");
							break;
						
						case('2'):
							cout<<"\n VER INVENTARIO DE PRODUCTOS\n"; //Ver los productos ya ingresados en el inventario
							for (a=0; a<c; a++){
								
			                    cout<<"\nNombre del producto "<<a + 1<<": "<<nombreproducto[a]<<endl;
			                    cout.precision(1);
	                            cout.setf(ios::fixed);
	                            cout.setf(ios::showpoint);
			                    cout<<"Precio del producto "<<a + 1<<": $"<<precioproducto[a]<<endl;
	                           	}
	
							system("pause");
							break;
							
						case('3'):
							cout<<"\n Ha seleccionado salir \n";
							system("pause");
							break;
							
						default:
							cout<<"Opcion incorrecta, por favor intentelo de nuevo";
							system("pause");
					    }
					}else if(opcioninventario=='3'){
						cout<<"\nHa seleccionado salir.\n";
						system("pause");	
					}else{
						cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					    system("pause");		
					}
					

					
					system("pause");	
					break;
						
				case('2'):
					cout<<"\nCREAR UN USUARIO AL CLIENTE\n"; //Creacion de usuario, por el momento sin funcionar
					system("pause");
					break;
							
				case('3'):
					cout<<"\nFACTURACION DE PRODUCTOS\n"; //Facturacion de los productos, por el momento sin funcionar
					system("pause");
					break;
							
				case('4'):
					cout<<"\nHa seleccionado salir.\n"; //Salir al menu princial
					system("pause");
					break;
							
				default:
					cout<<"Opcion incorrecta, por favor intentelo de nuevo"; //Validaciones para impedir que el codigo siga ejecutandose con variables erroneas
					system("pause");
							
				}

				}else if(opcionsubmenu=='4'){
					cout<<"\nHa seleccionado salir.\n";
					system("pause");
				}else{
					cout<<"Opcion incorrecta, por favor intentelo de nuevo";
					system("pause");	
				}
			system("pause");
			break;
				
		case('5'):
			cout<<"\nHa seleccionado salir, gracias por usar el programa\n";
			system("pause");
			break;
			
		default:
			cout<<"\nOpcion invalida, intentelo de nuevo\n";
			system("pause");
	}
	system("cls");

	}while(opcionmenu!=5);

	return 0;
}
