#include <iostream>
#include <cstring>

using namespace std;

void convertirMinuscula(char []);
bool esAnagrama(char [], char []);

//----------------------------------------------
int main() {
	
	char palabra1[32], palabra2[32];

	gets(palabra1);
	gets(palabra2);

	convertirMinuscula(palabra1);
	convertirMinuscula(palabra2);

	if (esAnagrama(palabra1, palabra2)) {
		cout << "Las palabras son anagramas." << endl;
	}
	else {
		cout << "Las palabras no son anagramas." << endl;
	}

	return 0;
}
//----------------------------------------------

void convertirMinuscula(char cadena[]) {
	int i=0;

	while (cadena[i]) {
		cadena[i]=tolower(cadena[i]);
		i++;
	}
}

bool esAnagrama(char a[], char b[]) {
	int i=0, j;
	bool bandera=true, encontrado;
	int tam1, tam2;

	tam1=strlen(a);
	tam2=strlen(b);

	//Si el tamaño es distinto, no son anagramas (no entra al siguiente while).
	if (tam1!=tam2) {
		bandera=false;
	}

	/* Recorre "a", se supone que es anagrama (bandera=true), si al recorrer "b" no se
	encuentra coincidencia con el caracter a[i], se rompe la condicion en el while y
	se retorna false. Si se encuentra se reemplaza el caracter por '.' para evitar
	futuros falsos positivos por la posible existencia de caracteres repetidos. */
	
	while (a[i] && bandera) {
		j=0;
		encontrado=false;
		while (b[j] && !encontrado) {
			if (a[i]==b[j]) {
				encontrado=true;
				b[j]='.';
			}
			j++;
		}
		if (!encontrado) {
			bandera=false;
		}

		i++;
	}
	return bandera;
}
