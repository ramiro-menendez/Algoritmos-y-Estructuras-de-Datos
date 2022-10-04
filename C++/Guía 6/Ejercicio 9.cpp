#include <iostream>
#include <cstring>

using namespace std;

void imprimirFecha(char []);
int convertirNum(char []);
int potencia10(int);

//----------------------------------------------
int main() {
	
	char fecha[32];
	
	gets(fecha);
	imprimirFecha(fecha);
	
	return 0;
}
//----------------------------------------------

void imprimirFecha(char fecha[]) {
	int day, month, year, aux;

    aux=convertirNum(fecha);
    day=aux/1000000;
    month=(aux/10000)%100;
    year=aux%10000;

    cout << day << " de ";

	switch (month)
	{
	case 1: cout << "Enero";
			break;
	case 2: cout << "Febrero";
			break;
	case 3: cout << "Marzo";
			break;
	case 4: cout << "Abril";
			break;
	case 5: cout << "Mayo";
			break;
	case 6: cout << "Junio";
			break;
	case 7: cout << "Julio";
			break;
	case 8: cout << "Agosto";
			break;
	case 9: cout << "Septiembre";
			break;
	case 10: cout << "Octubre";
			break;
	case 11: cout << "Noviembre";
			break;
	case 12: cout << "Diciembre";
			break;
	}

	cout << " de " << year << endl;
	
}

int convertirNum(char fecha[]) {
	int date=0, i=0, tam;
	
	tam=strlen(fecha);
	
	while(fecha[i]) {
		date+=((int)fecha[i]-48)*potencia10(tam-1);
		tam--;
		i++;
	}
	
	return date;
}

int potencia10(int exp) {
	if (exp==0) return 1;
	return 10*potencia10(exp-1);
}
