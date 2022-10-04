#include<iostream>
using namespace std;

void sumarDia(int&, int&, int&);
int diasMes(int, int);
bool esBisiesto(int);

//------------------------------------------------
int main() {
	
	int dia, mes, anio;
	cout << "Ingrese una fecha en formato \"dia mes a"<<char(164)<<"\": ";
	cin >> dia >> mes >> anio;

	sumarDia(dia, mes, anio);

	cout << "La nueva fecha es: " << dia << " / " << mes << " / " << anio << endl;

	return 0;
}
//-------------------------------------------------

void sumarDia(int& dia, int& mes, int& anio) {
	if (mes<1 || mes>12 || dia<1 || dia>diasMes(mes, anio)) {
		dia=mes=anio=0;
	}
	else {
		dia++;
	}
	if (dia>diasMes(mes, anio)) {
		dia=1;
		mes++;
	}
	if (mes>12) {
		mes=1;
		anio++;
	}

}

int diasMes(int mes, int anio) {
	int result;
	switch(mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
			result=31;
			break;
		case 2: 
			if (esBisiesto(anio)) {
				result=29;
			}
			else {
				result=28;
			}
			break;
		default: 
			result=30;
			break;
	}	
	return result;
}

bool esBisiesto(int anio) {
	bool result=false;
	if (anio%4==0 && anio%100!=0 || anio%400==0) result=true;
	return result;
}