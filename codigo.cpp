#include<iostream>
#include<Windows.h>
#define N 10
#define M 10
#define T 30

using namespace std;

void rellenar(int matriz[N][M]);
void imprimir(int matriz[N][M]);

//----------------------------------------------
int main() {
	
	int matriz[N][M]={0};
	
	rellenar(matriz);
	
	return 0;
}
//----------------------------------------------

void rellenar(int matriz[N][M]) {
	int secuencia=1;
	int a=0, b=N, c=M;
	int i=0, j;
	
	while(secuencia<N*M) {
		i=a;
		for(j=a; j<c; j++) {
			matriz[i][j]=secuencia++;
			imprimir(matriz);
			Sleep(T);
			system("cls");
		}
		for(i=a+1; i<b; i++) {
			matriz[i][j-1]=secuencia++;
			imprimir(matriz);
			Sleep(T);
			system("cls");
		}
		for(j=b-2; j>=a; j--) {
			matriz[i-1][j]=secuencia++;
			imprimir(matriz);
			Sleep(T);
			system("cls");
		}
		for(i=c-2; i>a; i--) {
			matriz[i][j+1]=secuencia++;
			imprimir(matriz);
			Sleep(T);
			system("cls");
		}
		a++;
		b--;
		c--;
	}
	
}

void imprimir(int matriz[N][M]) {
	for(int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (matriz[i][j]==0) {
				cout << "     ";
			}
			else if (matriz[i][j]<10) {
				cout << matriz[i][j] << "    ";
			}
			else if (matriz[i][j]<100) {
				cout << matriz[i][j] << "   ";
			}
			else if (matriz[i][j]<1000) {
				cout << matriz[i][j] << "  ";
			}
		}
		cout << endl << endl;
	}
	
}
