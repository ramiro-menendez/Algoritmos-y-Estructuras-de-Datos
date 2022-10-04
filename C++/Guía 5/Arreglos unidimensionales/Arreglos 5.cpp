#include<iostream>
#define N 10

using namespace std;

int sumaDigitos(int);

//------------------------------
int main() {
	
	int V[N] = {1,2,3,4,5,76,47,3,156,14};
	bool condicion=true;
	int num;
	
	do {
		cin >> num;
		for (int i=0; i<N; i++) {
			if (sumaDigitos(num) == V[i]) condicion=false;
		}
	} while (condicion);
	
	
	return 0;
}
//--------------------------------

int sumaDigitos(int n){
	//caso base
	if(n<10) return n;
	//caso recursivo
	return n%10 + sumaDigitos(n/10);
}
