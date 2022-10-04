#include <iostream>
#include <Windows.h>
#define N 9

//--- Con N en el encabezado se pone el tamaño de la matriz -----
//--- En la línea 76 se pone la velocidad de animacion ----------
//--- Si N es muy grande no se ve bien la animacion (depende del tamaño de la ventana de consola) ---


using namespace std;

void imprimir(int [][N]);
//----------------------------------------------
int main() {
	
	int tablero[N][N] = {0};
	int a, b, cantValores, secuencia, i, j;
	a=0;
	b=N;
	cantValores=N*N;
	secuencia=1;
	i=0;
	
	while(secuencia<=cantValores) {
		//i y j arrancan en 0, j aumenta hasta b=N.
		//luego de avanzar, bajar, retroceder, y subir, a y b decrecen.
		//cada for es un movimiento (avanz, bajar, subir, retroceder)
		for (j=a; j<b; j++) {
			tablero[i][j]=secuencia++;
			imprimir(tablero);
		}
		for (i=a+1; i<b; i++) {
			tablero[i][j-1]=secuencia++;
			imprimir(tablero);
		}
		for (j=b-1; j>a; j--) {
			tablero[i-1][j-1]=secuencia++;
			imprimir(tablero);
		}
		for (i=b-1; i>a+1; i--) {
			tablero[i-1][j]=secuencia++;
			imprimir(tablero);
		}
		a++;
		b--;
	}
	
	
	return 0;
}
//----------------------------------------------

void imprimir(int tablero[N][N]) {
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (tablero[i][j]<10) {
				if (tablero[i][j]==0) {  //Si el num es 0, coutea espacio. (o sea, cuando todavia no se llenó)
					cout << "    ";
				}
				else cout << tablero[i][j] << "   ";
			}
			else if (tablero[i][j]<100) {
				if (tablero[i][j]==0) {
					cout << "   ";
				}
				else cout << tablero[i][j] << "  ";
			}
			else {
				if (tablero[i][j]==0) {
					cout <<  "  ";
				}
				else cout << tablero[i][j] << " ";
			}
		}
		cout << endl << endl;
	}
	Sleep(30); //Delay de 30ms entre que aparezca cada numero.
	system("cls"); //Borra la pantalla para q dibuje el proximo frame.
}
