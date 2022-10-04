#include<iostream>
#define N 6

using namespace std;

void ordenar(int V[]);
bool Quini6(int, int [], int []);

//------------------------------
int main() {
	
	int n;
	int sorteo[N] = {02,40,25,10,06,34};
	int boleta[N];
	
	cout << "Ingrese el número de boleta: ";
	cin >> n;
	
	//ingreso de numeros del jugador
	for (int i=0; i<N; i++) {
		do {
			cin >> boleta[i];
		} while (boleta[i]<0 || boleta[i]>45);
	}
	
	if (Quini6(n, sorteo, boleta)) {
		cout << "El jugador " << n << " ha ganado $180.000.000!!!" << endl;
	};
	
	return 0;
}
//--------------------------------

bool Quini6(int, int sorteo[], int boleta[]) {
	bool result=true;
	
	ordenar(sorteo);
	ordenar(boleta);
	
	for (int i=0; i<N; i++) {
		if (sorteo[i]!=boleta[i]) result=false;
	}
	
	return result;
}

void ordenar(int V[]) {
	int aux;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (V[i]>V[j]) {
				aux=V[i];
				V[i]=V[j];
				V[j]=aux;
			}
		}
	}
}