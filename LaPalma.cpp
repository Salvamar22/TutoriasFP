#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

typedef struct producto {
	string nombre;
	double precio;
	int cantidad;
} Producto;

typedef struct usuario {
	string nombre;
	string dui;
	vector<Producto> productos;
} Usuario;

vector<Usuario> usuarios;

string toLower(string str) {
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

void imprimirProductos(vector<Producto> &productos) {
	for (size_t i = 0; i < productos.size(); ++i) {
		cout << "\nNombre del producto " << i + 1 << ": " << productos[i].nombre
				 << "\n";
		cout.precision(1);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout << "Precio del producto " << i + 1 << ": $" << productos[i].precio
				 << "\n";
		cout << "Cantidad del producto " << i + 1 << ": " << productos[i].cantidad
				 << "\n";
	}
}

int encontrarProducto(vector<Producto> productos, string nombre) {
	for (size_t i = 0; i < productos.size(); ++i) {
		if (toLower(productos[i].nombre) == toLower(nombre)) return i;
	}

	return -1;
}

int encontrarUsuario(string dui) {
	for (size_t i = 0; i < usuarios.size(); ++i) {
		if (usuarios[i].dui == dui) return i;
	}

	return -1;
}

bool validarDui(string dui) {
	const string Digitos = "0123456789";

	if ((dui.size() > 10 or dui.size() < 9) or
	    (dui.size() == 10 and dui[8] != '-')) {
		cout << "El dui ingresado no existe, por favor coloque un dato valido\n";
		return false;
	}

	for (size_t i = 0; i < dui.size(); i++) {
		if (dui.size() == 10 and i == 8) continue;

		if (Digitos.find(dui[i]) == string::npos) {
			cout << "El dui ingresado no existe, por favor coloque un dato valido\n";
			return false;
		}
	}

	return true;
}

void submenu(string bienvenida, vector<Producto> &productos) {
	int opcionSubmenu;

	do {
		cout << bienvenida;
		int opcionInventario, opcionProducto;
		cout << "\n Seleccione una opcion: \n";
		cout << "\n 1.Inventario de productos\n";
		cout << "\n 2.Crear usuario de cliente\n";
		cout << "\n 3.Comprar\n";
		cout << "\n 4.Facturacion\n";
		cout << "\n 5.Salir\n";
		cin >> opcionSubmenu;
		if (opcionSubmenu == 1) {
			do {
				cout << "\nINVENTARIO\n";
				cout << "\n Seleccione una opcion: \n";
				cout << "\n 1.Actualizar inventario de productos\n";
				cout << "\n 2.Ver inventario de productos\n";
				cout << "\n 3.Salir\n";
				cin >> opcionInventario;

				switch (opcionInventario) {
					case 1:
						do {
							cout << "\n CREAR/ACTUALIZAR INVENTARIO DE PRODUCTOS\n";
							cout << "\n Desea ingresar un producto? \n";
							cout << "\n 1. Si \n \n 2. No\n\n";
							cin >> opcionProducto;

							switch (opcionProducto) {
								int c;
								case 1:
									cout << "\n Limite de cantidad de productos'10' \n";
									cout << "\n Cuantos productos desea ingresar? \n";
									cin >> c;
									for (int a = 1; a <= c; a++) {
										string nombre;
										cout << "\nIngrese el nombre del producto " << a << ": ";
										cin >> nombre;

										int indiceProducto = encontrarProducto(productos, nombre);
										Producto nuevoProducto = Producto();
										if (indiceProducto != -1) {
											nuevoProducto = productos[indiceProducto];
										} else {
											nuevoProducto.nombre = nombre;
										}

										cout << "\nIngrese el precio del producto " << a << ": $";
										cin >> nuevoProducto.precio;
										cout << "\nIngrese la cantidad del producto " << a << ": ";
										cin >> nuevoProducto.cantidad;
										productos.push_back(nuevoProducto);
									}
									break;

								case 2:
									break;

								default:
									cout << "Vuelve a intentarlo\n";
							}
						} while (opcionProducto != 2);
						break;

					case 2:
						cout << "\n VER INVENTARIO DE PRODUCTOS\n";
						imprimirProductos(productos);
						break;

					default:
						cout << "Vuelve a intentarlo\n";
				}
			} while (opcionInventario != 3);
		} else if (opcionSubmenu == 2) {
			int l;
			do {
				cout << "\n 1. Registrar cliente \n";
				cout << "\n 2. Salir \n";
				cin >> l;
				size_t numeroDeUsuarios = usuarios.size() + 1;

				switch (l) {
					case 1:
						Usuario nuevoUsuario = Usuario();
						cout << "Nombre del cliente " << numeroDeUsuarios << "\n";
						cin >> nuevoUsuario.nombre;
						cout << "Numero de dui " << numeroDeUsuarios << "\n";
						cin >> nuevoUsuario.dui;
						if (validarDui(nuevoUsuario.dui)) usuarios.push_back(nuevoUsuario);
						break;
				}
			} while (l != 2);
		} else if (opcionSubmenu == 3) {
			string dui;
			cout << "Ingresa tu dui: ";
			cin >> dui;

			if (validarDui(dui)) {
				int indiceUsuario = encontrarUsuario(dui);

				if (indiceUsuario == -1) {
					cout << "Usuario no encontrado\n";
				} else {
					int productoCompra;
					do {
						cout << "Que quieres comprar " << usuarios[indiceUsuario].nombre;
						cout << "? ";
						imprimirProductos(productos);
						cout << "\n" << (productos.size() + 1) << ". Salir\n";
						cin >> productoCompra;
						if (productoCompra < 1 or productoCompra > (int)productos.size())
							break;

						int cantidad;
						do {
							cout << "Cuantos quieres comprar? ";
							cin >> cantidad;
							cout << "No puedes comprar tantos...\n";
						} while (productos[productoCompra - 1].cantidad < cantidad);

						productos[productoCompra - 1].cantidad -= cantidad;
						Producto producto = productos[productoCompra - 1];
						producto.cantidad = cantidad;

						cout << "(" << productos.size() << ")\n";
						usuarios[indiceUsuario].productos.push_back(producto);
					} while (1);
				}
			}
		} else if (opcionSubmenu == 4) {
			string dui;
			cout << "Ingresa tu dui: ";
			cin >> dui;

			if (validarDui(dui)) {
				int indiceUsuario = encontrarUsuario(dui);

				if (indiceUsuario == -1) {
					cout << "Usuario no encontrado\n";
				} else {
					Usuario usuario = usuarios[indiceUsuario];
					cout << "Esta es tu factura " << usuario.nombre;
					cout << "\n";

					vector<Producto> productos = usuario.productos;
					imprimirProductos(productos);

					double suma = 0.0;
					for (size_t i = 0; i < productos.size(); ++i) {
						suma += productos[i].cantidad * productos[i].precio;
					}

					cout << "Total: " << suma << "\n";
				}
			}
		} else if (opcionSubmenu == 5) {
		} else {
			cout << "Vuelve a intentarlo\n";
		}
	} while (opcionSubmenu != 5);
}

void menu() {
	int opcionMenu;

	vector<Producto> sanSalvador, soyapango, sanMiguel, santaTecla;

	do {
		cout << "\n     BIENVENIDO A FERRETERIA LA PALMA\n";
		cout << "\n Seleccione el local de ferreteria en la que se encuentra: \n";
		cout << "\n 1. Ferreteria La Palma San Salvador\n";
		cout << "\n 2. Ferreteria La Palma Soyapango\n";
		cout << "\n 3. Ferreteria La Palma San Miguel\n";
		cout << "\n 4. Ferreteria La Palma Santa tecla\n";
		cout << "\n 5. Salir del programa\n";
		cin >> opcionMenu;
		switch (opcionMenu) {
			case 1:
				submenu("\n     BIENVENIDO A FERRETERIA LA PALMA SAN SALVADOR\n",
				        sanSalvador);
				break;

			case 2:
				submenu("\n     BIENVENIDO A FERRETERIA LA PALMA SOYAPANGO\n",
				        soyapango);
				break;

			case 3:
				submenu("\n     BIENVENIDO A FERRETERIA LA PALMA SAN MIGUEL\n",
				        sanMiguel);
				break;

			case 4:
				submenu("\n     BIENVENIDO A FERRETERIA LA PALMA SANTA TECLA\n",
				        santaTecla);
				break;

			case 5:
				break;

			default:
				cout << "Vuelve a intentarlo\n";
		}
	} while (opcionMenu != 5);
}

int main() {
	menu();
	return 0;
}
