#include <iostream>
#include <ctime>

using namespace std;

void llenarMatriz (int viajes[4][10]);
int cantPasajeros_Loc(int viajes[4][10], int num);
int cantPasajeros_Cat(int viajes[4][10], int num);
void locNingunPasaje(int viajes[4][10]);

//----------------------------------------------
int main() {
	
	int viajes[4][10], num, sum=0, menor=9999, k;
	
	llenarMatriz(viajes);
	/*viajes[0][4]=0;
	viajes[1][4]=0;
	viajes[2][4]=0;
	viajes[3][4]=0;
	viajes[0][7]=0;
	viajes[1][7]=0;
	viajes[2][7]=0;
	viajes[3][7]=0;*/
	
	for (int i=0; i<4; i++) {
		for (int j=0; j<10; j++) {
			if (viajes[i][j]<10) {
				cout << viajes[i][j] << "   ";
			}
			else if (viajes[i][j]<100) {
				cout << viajes[i][j] << "  ";
			}
			else {
				cout << viajes[i][j] << " ";
			}
		}
		
		
		cout << endl;
	}
	
	for (int j=0; j<25; j++) {
		for (int i=0; i<4; i++) {
			sum+=viajes[i][j];
		}
		if (sum<menor) {
			menor=sum;
			k=j;
		}
		sum=0;
	}
	cout << "La localidad " << k+1 << " vendio menos pasajes." << endl;
	
	/*cout << endl << "Localidad a ver cantidad de pasajeros: ";
	cin >> num;
	cout << cantPasajeros_Loc(viajes, num) << endl;
	
	cout << endl << "Categoria a ver cantidad de pasajeros: ";
	cin >> num;
	cout << cantPasajeros_Cat(viajes, num) << endl;*/
	
	
	
	return 0;
}
//----------------------------------------------

void llenarMatriz(int viajes[4][10]) {
	srand(time(NULL));
	
	for (int i=0; i<4; i++) {
		for (int j=0; j<10; j++) {
			viajes[i][j]=rand()%500;

		}
		
	}
	
}

int cantPasajeros_Loc(int viajes[4][10], int num) {
	int sum=0;
	
	for (int i=0; i<4; i++) {
		sum+=viajes[i][num-1];
	}
	
	return sum;
}

int cantPasajeros_Cat(int viajes[4][10], int num) {
	int sum=0;
	
	for (int i=0; i<10; i++) {
		sum+=viajes[num-1][i];
	}
	
	return sum;
}


