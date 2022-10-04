#include<iostream>
#define N 4

using namespace std;

void desplazIzq(int []);

//------------------------------
int main() {
	
	int V[N] = {1,2,3,4};

	desplazDer(V);

	for (int i=0; i<4; i++) {
		cout << V[i] << " ";
	}
	
	return 0;
}
//--------------------------------

void desplazDer(int V[]) {
	int aux;
	for (int i=N-1; i>0; i--) {
		if (i==N-1) aux = V[i];
		V[i] = V[i-1];
	}
	V[0]=aux;
}
