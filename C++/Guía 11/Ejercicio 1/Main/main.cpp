#include "triangulo.h"
#include "cuadrado.h"
#include <iostream>

using namespace std;

int elegirForma();

int main() {
	
	elegirForma();
	
	
	return 0;
}

int elegirForma() {
	int opcion=3;
	
	cout<< "1 ---> Crear cuadrado." << endl
		<<  "2 ---> Crear triángulo." << endl << endl
		<< "Seleccione la forma a crear: ";
	
	while (opcion!=1 && opcion!=2) {
		cin >> opcion;
	}
	system("cls");
	
	return opcion;
}
