#include <iostream>
#include <cstring>

using namespace std;


//----------------------------------------------
int main() {
	
	char cadena[100], palabra[12];
    int tam, i=0, j=0;

    cout << "Introduce la frase: ";
    gets(cadena);
    cout << "Introduce la palabra prohibida: ";
    gets(palabra);

    tam=strlen(palabra);

    while (cadena[i]!='\0') {
        bool bandera = false;
        if (cadena[i]==palabra[j]) {
            for (int k=i; k<i+tam; k++) {
                if (cadena[k]==palabra[j]) {
                    if (j==tam-1) {
                        bandera = true;
                    }
                }
                j++;
            }
            j=0;
        }
        if (bandera) {
            for (int j=0; j<tam; j++) {
                cout << 'X';
                i++;
            }
        }
        else {
            cout << cadena[i];
            i++;
        }

    }
	
	return 0;
}
//----------------------------------------------
