#include<iostream>
#include<cstring>
#include<ctime>
#include "C:\Users\ramir\Downloads\color-console-master\color-console-master\include\color.hpp"

using namespace std;

void buscarPalabra(char [][10], char[], bool[]);
int cantColMin(char [][10]);
void rellenarAleatorio(char [][10]);
void imprimirTablero(char [][10], bool[], char[]);

//----------------------------------------------
int main() {
	
	char tablero[10][10];
	char palabra[10];
	bool filaEncontrada[10] = {false};

	rellenarAleatorio(tablero);

	imprimirTablero(tablero, filaEncontrada, palabra);

	gets(palabra);


	buscarPalabra(tablero, palabra, filaEncontrada);
	imprimirTablero(tablero, filaEncontrada, palabra);

	cout << "Cantidad de columnas con minusculas " << cantColMin(tablero) << endl;



	return 0;
}
//----------------------------------------------

void buscarPalabra(char tablero[10][10], char palabra[10], bool fila[10]) {
	int cont=0, tam=strlen(palabra);

	for (int i=0; i<10; i++) {
		for (int j=9; j>=0; j--) {
			if (tablero[i][j]==toupper(palabra[9-j])) {
				cont++;
			}
		}
		if (cont==tam) {
			cout << "La palabra " << palabra << " se encuentra en la fila " << i+1 << endl;
			fila[i]=true;
		}
		cont=0;
	}
}

int cantColMin(char tablero[10][10]) {
	int cont=0, cantCol=0;

	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			if (islower(tablero[j][i])) {
				cont++;
			}
		}
		if (cont==10) {
			cantCol++;
		}
		cont=0;
	}

	return cantCol;
}

void rellenarAleatorio(char tablero[10][10]) {
	srand(time(NULL));

	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			tablero[i][j]=rand()%('Z'-'A')+'A';
		}
	}

}

void imprimirTablero(char tablero[10][10], bool fila[10], char palabra[10]) {
	int tam=strlen(palabra);

	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			if (fila[i] && (9-j)<tam) {
				cout << dye::green(tablero[i][j]) << " ";
			}
			else {
				cout << tablero[i][j] << " ";
			}
		}
		cout << endl;
	}
}

