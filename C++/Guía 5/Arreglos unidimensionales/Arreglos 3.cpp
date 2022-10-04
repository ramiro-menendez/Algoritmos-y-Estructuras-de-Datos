#include<iostream>
#define N 10
using namespace std;

int mayor (int [], int, int);

//----------------------------------------------
int main() {
	
	int V[N] = {1,9,5,1,5,10,19,51,5,1};
	int limInf, limSup;
	
	do {
		cout << "Ingrese el limite inferior (entre 0 y 9): ";
		cin >> limInf;
	} while (limInf<0 || limInf>=N);
	do {
		cout << "Ingrese el limite superior (mayor al limite inferior y entre 0 y 9): ";
		cin >> limSup;
	} while (limSup<0 || limSup>=N || limSup<limInf);
	
	cout << mayor(V, limInf, limSup);
	
	return 0;
}
//----------------------------------------------

int mayor (int A[], int inf, int sup) {
	int n=0;
	for (int i=inf; i<sup; i++) {
		if (A[i]>n) n=A[i];
	}
	return n;
}
