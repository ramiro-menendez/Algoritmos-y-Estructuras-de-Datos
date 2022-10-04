#include<iostream>
#define N 15

using namespace std;

//------------------------------
int main() {
	
	char x, V[N];
	int i=0, cont;
	
	cout << "Ingrese caracteres, presione CTRL+Z para terminar." << endl;
	while(i<N && cin >> x) {
		V[i]=x;
		i++;
	}
	
	/*cuenta cuantas veces aparece cada letra desde la 'a' hasta la 'z'
	y lo imprime*/
	for (int i='a'; i<='z'; i++) {
		cont=0;
		for (int j=0; j<N; j++) {
			if (V[j]==i) cont++;
		}
		if(cont!=0) {
			cout << (char)i << " = " << cont << endl;
		}
	}
	
	return 0;
}
//--------------------------------
