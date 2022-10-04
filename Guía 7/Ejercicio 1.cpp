#include <iostream>

using namespace std;


//----------------------------------------------
int main() {

	int correo[5][5] = {{1,2,3,4,5},{5,3,7,2,9},{0,0,0,2,3},{5,2,6,8,13},{124,5,7,0,0}};
	int sum[5]={0}, mayor=0, M, superaCota;

	cin >> M;

	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			sum[i]+=correo[i][j];
		}
		if (sum[i]>mayor) {
			mayor=i;
		}
		cout << "Servidor " << i+1 << ": " << sum[i] << " kb" << endl;
	}	
	
	cout << endl << "El servidor que mayor datos envio fue el servidor " << mayor+1 << endl;

	for (int i=0; i<5; i++) {
		if (sum[i]>M) {
			cout << "El servidor " << i+1 << " supero la cota de " << M << "kb." << endl;
		}
	}

	return 0;
}
//----------------------------------------------

	/*	
	
		Una matriz es un arreglo multidimensional (puede tener 2 o más) 
	- bidimensionales
	- tridimensionales
	- N-dimensionales es decir, multidimensionales

	tipo nombre-matriz [filas][columnas]. 
	Las filas y columnas deben ser variables CONSTANTES


	*/