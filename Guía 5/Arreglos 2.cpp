#include<iostream>
#include<ctime>
using namespace std;

void imprimir_vector(int V[], int tam);

//----------------------------------------------
int main() {
	
	int V[] = {1,2,3,4,5,6,7,8,9,10};
	
	imprimir_vector(V, 10);
	
	for (int i=0; i<10; i++) {
		cout << V[i] << endl;
	}
	
	return 0;
}
//----------------------------------------------

void imprimir_vector(int V[], int tam) {
	for (int i=0; i<tam; i++) {
		cout << V[i] << endl;
	}
}