#include <iostream>
#include <string.h>

using namespace std;


//----------------------------------------------
int main() {
	
	char entrada[30];
	char nombre[15], apellido;
	
	//cin.getline(nombre, 8, '\n');
	//getline(cin, nombre);
	
	gets(entrada);
	
	for (int i=0; i<30; i++) {
		entrada[i]=tolower(entrada[i]);
	}
	
	for (int i=0; i<30; i++) {
		if (entrada[i]!=' ') {
			nombre[i]=entrada[i];
		}
		
		if (entrada[i]==' ') {
			apellido=entrada[i+1];
			break;
		}
	}
	
	
	cout << endl << apellido << nombre<< "@frsf.utn.edu.ar" << endl;
	
	
	return 0;
}
//----------------------------------------------
