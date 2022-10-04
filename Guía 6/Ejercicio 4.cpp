#include <iostream>
#include <string.h>

using namespace std;


//----------------------------------------------
int main() {
	
	char cadena[100];
	int caracteres, palabras=1;
	
	gets(cadena);
	
	caracteres = strlen(cadena);
	
	for (int i=0; i<caracteres; i++) {
		if (cadena[i]==' ') {
			palabras++;
		}

	}
	
	cout << "Caracteres: " << caracteres << endl;
	cout << "Palabras: " << palabras << endl;
	
	return 0;
}
//----------------------------------------------
