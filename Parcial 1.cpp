#include <iostream>
using namespace std;
// codifique completamente la funcionParcial aquí
int funcionParcial(int I, int D){
	int cant=0;
	for (int i=I; i<=D; i++) {
		if (i%2==0 && i%5==0) {
			cant++;
		}
	}
	return cant;
}

int main(int argc, char *argv[]) {
	// declare las variables necesarias aquí...
	int N1, N2, N3, N4, I, D;
	// codifique el ingreso de datos del problema aquí...
	do {
		cin >> N1 >> N2 >> N3 >> N4;
	} while (N1==N2 || N1==N3 || N1==N4 || N2==N3 || N2==N4 || N3==N4);

	//calcular minimo-
	if (N1<N2 && N1<N3 && N1<N4) {
		I=N1;
	}
	else if (N2<N1 && N2<N3 && N2<N4) {
		I=N2;
	}
	else if (N3<N2 && N3<N1 && N3<N4) {
		I=N3;
	}
	else {
		I=N4;
	}
	//calcular mayor-
	if (N1>N2 && N1>N3 && N1>N4) {
		D=N1;
	}
	else if (N2>N1 && N2>N3 && N2>N4) {
		D=N2;
	}
	else if (N3>N2 && N3>N1 && N3>N4) {
		D=N3;
	}
	else {
		D=N4;
	}
	// llamada a funciones y visualización de resultados aquí...
	cout << funcionParcial(I, D) << endl;
	return 0;
}
