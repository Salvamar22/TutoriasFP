/*
	Valores enteros validos: numeros solos o con signo +/- delante
	10
	+5
	-5
*/

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

bool esEntero(string);

int main() {
	string num;
	int numero;
	bool repite = true;
	
	do {
		cout << "\nIngrese un valor entero: ";
		getline(cin, num);
		
		if (esEntero(num)) {
			repite = false;
		} else {
			cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
		}
	} while (repite);
	
	numero = atoi(num.c_str());
	
	cout << "El numero ingresado fue: " << numero << endl;
	
	cin.get();
	return 0;
}

bool esEntero(string num) {
	bool esEntero = true;
	int longitud = num.size();
	
	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(num[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (num[0] == '+' || num[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}
		
		while (indice < longitud) {
			if (!isdigit(num[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}
	
	
	return esEntero;	
}