#include<iostream>

using namespace std;

void ordenar(int [], int);

//----------------------------------------------
int main() {
	
	//---ORDENAMIENTO DE ARREGLOS DE TAMAÑO 5---

	int V[] = {4,2,3,5,1};
	int aux;
	
	//Ordenamiento burbuja
	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++){
			if (V[j]>V[j+1]) {
				aux=V[j];
				V[j]=V[j+1];
				V[j+1]=aux;
			}
		}
	}
	
	//Ordenamiento por incersión
	int pos;
	for (int i=0; i<5; i++) {
		pos=i;
		while (pos>0 and V[pos]<V[pos-1]) {
			aux=V[pos];
			V[pos]=V[pos-1];
			V[pos-1]=aux;
			pos--;
		}
	}
	
	//Ordenamiento
	for (int i=0; i<5; i++) {
		for (int j=1; j<4; j++) {
			if (V[i]>V[j]) {
				aux=V[i];
				V[i]=V[j];
				V[j]=aux;
			}
		}
	}

	//Ordenamiento recursivo por selección
	ordenar(V, 5);
	
	//Salida de datos
	for (int i=0; i<5; i++) {
		cout << V[i] << " ";
	}
	
	return 0;
}
//---------------------------------------------

void ordenar(int V[], int tam){
	//caso base
	if(tam==1) return;
	//caso recursivo
	int mayor=V[0], aux, pos=0;
	for(int i=0; i<tam; i++) {
		if(V[i]>mayor) {
			mayor=V[i];
			pos=i;
		}
	}
	V[pos]=V[tam-1];
	V[tam-1]=mayor;
	return ordenar(V, tam-1);
}
