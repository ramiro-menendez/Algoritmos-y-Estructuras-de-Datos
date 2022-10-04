#include <iostream>
#include <cstring>

using namespace std;

void codificar(char [], int);
void decodificar(char [], int);

//----------------------------------------------
int main() {
	
	char cadena[32];
	int n;
	
	
	gets(cadena);
	
	do {
		cout << "Ingrese un número positivo: ";
		cin >> n;
	} while(n<0);
	
	
	codificar(cadena, n);
	cout << cadena << endl;
	
	decodificar(cadena, n);
	cout << cadena << endl;
	
	return 0;
}
//----------------------------------------------

void codificar(char cadena[], int n) {
	int i=0;
	
	while (cadena[i]) {
		cadena[i]=toupper(cadena[i]);
		i++;
	}
	i=0;
	
	while (cadena[i]) {
		if (isalpha(cadena[i])) {
			cadena[i]=(((cadena[i])+n-'A')%('Z'-'A'+1))+'A';
		}
		i++;
	}
}

void decodificar(char cadena[], int n) {
	int i=0;
	
	while (cadena[i]) {
		if (isalpha(cadena[i])) {
			cadena[i]-=n;
			if (cadena[i]<'A') {
				cadena[i]+=('Z'-'A'+1);
			}
		}
		i++;
	}
}
