#include<iostream>
#define N 4

using namespace std;

void desplazIzq(int []);

//------------------------------
int main() {
	
	int V[N] = {1,2,3,4};

	desplazIzq(V);

	for (int i=0; i<4; i++) {
		cout << V[i] << " ";
	}
	
	return 0;
}
//--------------------------------

void desplazIzq(int V[]) {
	int aux;
	for (int i=0; i<N-1; i++) {
		if (i==0) aux = V[i];
		V[i] = V[i+1];
	}
	V[N-1]=aux;
}
