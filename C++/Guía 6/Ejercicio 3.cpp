#include <iostream>
#include <cstring>

using namespace std;

void borrarEspacios(char []);
void invertirCadena(char []);

//----------------------------------------------
int main() {
	
	char frase[64], aux[64]; 
	int k;
	
	gets(frase);
	borrarEspacios(frase);
	
	strcpy(aux, frase);
	invertirCadena(aux);
	
	k = strcmp(frase, aux);
	
	if (k==0) {
		cout << "Es palindromo" << endl;
	}
	else {
		cout << "No es palindromo" << endl;
	}
	
	
	return 0;
}
//----------------------------------------------

void borrarEspacios(char cadena[]) {
	int tam=strlen(cadena);
	int i=0, j=0;
	
	while (cadena[i]) {
		if (cadena[i]!=' ') {
			cadena[j++]=cadena[i];
		}
		i++;
	}
	cadena[j]='\0';	
}

void invertirCadena(char cadena[]) {
	char aux[64];
	int tam;
	
	tam=strlen(cadena);
	
	strcpy(aux, cadena);
	
	for (int i=0; i<tam; i++) {
		cadena[i]=aux[tam-1-i];
	}
}
