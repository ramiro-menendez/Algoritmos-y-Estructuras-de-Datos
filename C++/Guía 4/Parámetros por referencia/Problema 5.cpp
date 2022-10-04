#include <iostream>
using namespace std;

int accion(float, float, float, float&, float&);

//---------------------------------------------------------

int main() {
	
	float a, b, c, menor, mayor;
	cin >> a >> b >> c;

	cout << accion(a, b, c, menor, mayor) << endl;
	if (accion(a,b,c,menor,mayor)==-1) {
		cout << "No hay menor." << endl;
	}
	cout << "El menor es: " << menor;
	cout << "\nEl mayor es: " << mayor << endl;
	
	return 0;
}

//---------------------------------------------------------

int mayor(int a, int b, int c) {
	int aux;
	aux = a>b?a:b;
	return aux>c?aux:c;
}

int accion(float a, float b, float c, float& mayor, float& menor) {
	int comparacion;
	if (a==b && a==c) {
		comparacion = -1;
	}
	else if (a==b || a==c || b==c) {
		comparacion = 0;
		if (a==b) {
			mayor = mayor(a,b,c);
			menor = a<c?a:c;
		}
		else if (a==c) {
			mayor = a<b?b:a;
			menor = a<b?a:b;
		}
		else if (b==c) {
			mayor = a<b?b:a;
			menor = a<b?a:b;
		}
	}
	else {
		comparacion = 1;
		if (a<b && b<c) {
			menor = a;
			mayor = c;
		}
		else if (c<a && a<b) {
			menor = c;
			mayor = b;
		}
	}
	return comparacion;
}
