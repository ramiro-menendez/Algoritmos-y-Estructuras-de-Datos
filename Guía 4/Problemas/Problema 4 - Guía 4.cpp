#include <iostream>
using namespace std;

int menor(int, int, int);
int mayor(int, int, int);
float promedio(int, int, int);
int suma (int, int, int);

int main(int argc, char *argv[]) {
	
	int num1, num2, num3, opcion;
	
	cout << "Ingresá la operación que desea realizar entre 3 números.\n\n"
		<< "1. Menor.\n2. Mayor.\n3. Promedio.\n4. Suma." << endl;
	
	cin >> opcion;
	
	while (opcion<1 || opcion>4) {
		cout << "No seas gil, hay 4 opciones nomás, dale otra vez: ";
		cin >> opcion;
	}
	
	cout << "\nIngrese los 3 números a operar (deben ser distintos): ";
	cin >> num1 >> num2 >> num3;
	
	switch (opcion) {
		case 1: cout << menor(num1, num2, num3);
			break;
		case 2: cout << mayor(num1, num2, num3);
			break;
		case 3: cout << promedio(num1, num2, num3);
			break;
		case 4: cout << suma(num1, num2, num3);
			break;
	}
	
	return 0;
}

int menor(int num1, int num2, int num3) {
    int menor;
    if (num1<num2 && num1<num3) {
        menor=num1;
    }
    else if (num2<num1 && num2<num3) {
        menor=num2;
    }
    else {
        menor=num3;
    }
    return (menor);
}

int mayor(int num1, int num2, int num3) {
    int mayor;
    if (num1>num2 && num1>num3) {
        mayor=num1;
    }
    else if (num2>num1 && num2>num3) {
        mayor=num2;
    }
    else {
        mayor=num3;
    }
    return (mayor);
}

float promedio(int num1, int num2, int num3) {
    float promedio;

    promedio = (num1 + num2 + num3)/3;

    return(promedio);
}

int suma (int num1, int num2, int num3) {
    int suma;

    suma = num1 + num2 + num3;

    return(suma);
}
