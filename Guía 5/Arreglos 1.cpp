#include<iostream>
#include<ctime>
using namespace std;

void inicializar_teclado(int V[], int tam);
void inicializar_aleatorio(int V[], int tam);

//----------------------------------------------
int main() {
	
	int V[10];
	
	inicializar_aleatorio(V, 10);
	
	for (int i=0; i<10; i++) {
		cout << V[i] << endl;
	}
	
	return 0;
}
//----------------------------------------------

void inicializar_teclado(int V[], int tam) {
	for (int i=0; i<10; i++) {
		cin >> V[i];
	}
}

void inicializar_aleatorio(int V[], int tam) {
	srand(time(NULL));
	
	for (int i=0; i<10; i++) {
		V[i]=rand();
	}
}