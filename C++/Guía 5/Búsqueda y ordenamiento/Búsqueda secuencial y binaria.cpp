#include<iostream>

using namespace std;

void ordenar(int [], int);

//----------------------------------------------
int main() {
	
	//---ORDENAMIENTO DE ARREGLOS DE TAMAÑO 5---

	int V[] = {4,2,3,5,1};
	int num=3;
	bool bandera=false;

	//Búsqueda secuencial
	int i=0;
	while (!bandera && i<5)
	{
		if (V[i]==num) bandera=true;
		i++;
	}
	
	/*Para la búsqueda binaria, el vector debe estar ordenado.
	Se hace uso del ordenamiento burbuja. */
	int aux;
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++){
			if (V[j]>V[j+1]) {
				aux=V[j];
				V[j]=V[j+1];
				V[j+1]=aux;
			}
		}
	}

	//Búsqueda binaria
	int inf=0, sup=5, mitad;

	while (!bandera && (inf<=sup)) {
		mitad=(inf+sup)/2;
		if (V[mitad]==num) {
			bandera=true;
		}
		else if (V[mitad]<num) {
			inf=mitad+1;
		}
		else {
			sup=mitad-1;
		}
	}


	//Salida de datos
	if (bandera) cout << num << " está incluído en el vector" << endl;
	else cout << num << " no está en el vector" << endl;
	
	return 0;
}
//---------------------------------------------