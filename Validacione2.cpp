#include <iostream>

using namespace std;

int main() {
	/*int edad;

	cout << "\n\tIngrese una edad entre 18 y 100: ";
	cin >> edad;

	while (edad < 18 || edad > 100) {
		cout << "\tLa edad ingresada es incorrecta. Intente nuevamente.." << endl;
		cout << "\n\tIngrese una edad entre 18 y 100: ";
		cin >> edad;
	}

	cout << "\n\tHa ingresado la edad correctamente: " << edad << endl;

	cin.get();
	return 0;*/
 


	int edad;

	do {
		cout << "\n\tIngrese una edad entre 18 y 100: ";
		cin >> edad;
		
		if (edad < 18 || edad > 100) {
			cout << "\tLa edad ingresada es incorrecta. Intente nuevamente.." << endl;
		}
	} while (edad < 18 || edad > 100);

	cout << "\n\tHa ingresado la edad correctamente: " << edad << endl;

	cin.get();
	return 0;

}