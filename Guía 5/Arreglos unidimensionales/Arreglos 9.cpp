#include<iostream>
#define N 5

using namespace std;

void intercambio(int [], int, int);

//------------------------------
int main() {
	
	int V[N] = {1,2,3,4,5};
	int num1, num2;

	cout << "-----VECTOR-----";
	for (int i=0; i<N; i++) {
		cout << V[i] << " ";
	}
	cout << endl << endl;

	cout << "Ingrese el primer valor a permutar: ";
	cin >> num1;
	cout << "Ingrese el segundo: ";
	cin >> num2;

	intercambio(V, num1, num2);

	cout << "---VECTOR PERMUTADO---";
	for (int i=0; i<N; i++) {
		cout << V[i] << " ";
	}

	return 0;
}
//--------------------------------

void intercambio(int V[], int num1, int num2) {
	int i1, i2, aux;
	for (int i=0; i<N; i++) {
		if (V[i]==num1) i1=i;
		if (V[i]==num2) i2=i;
	}
	aux=V[i1];
	V[i1]=V[i2];
	V[i2]=aux;
}