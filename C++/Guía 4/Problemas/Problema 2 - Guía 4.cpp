#include<iostream>

using namespace std;

string cuadrado(int, char);
string tri_sup(int, char);
string tri_inf(int, char);

int main() {
	
	int num;
	char caracter;
	
	cout << "Mirá pibe, te hago un cuadradito como vos me pidas."
		<< "\nDecime cuánto querés que mida el lado, tiene que ser entre 1 y 30: ";
	cin >> num;
	
	while (num<1 || num>30) {
		cout << "No seas gil, el número es entre 1 y 30, dale otra vez: ";
		cin >> num;
	}
	
	cout << "\nListo wacho, ahora decime el caracter: ";
	cin >> caracter;
	
	cout << endl << cuadrado(num, caracter);
	
	cout << "\nNASHE"
		<< "\nAhora querés que te haga un triangulo?"
		<< "\nA ver, decime cuanto querés que mida, entre 1 y 30: ";
	cin >> num;
	
	while (num<1 || num>30) {
		cout << "Ah vos me tomas de pelotudo, entre 1 y 30 te dije, dale otra vez: ";
		cin >> num;
	}
	
	cout << "\nJoya, ahora meteme el caracter: ";
	cin >> caracter;
	
	cout << endl << tri_sup(num, caracter);

	cout << "\nAhora te hago uno invertido"
		<< "\nPasame la medida, entre 1 y 30: ";
	cin >> num;

	while (num<1 || num>30) {
		cout << "No me hagas renegar, entre 1 y 30: ";
		cin >> num;
	}

	cout << "\nBueno, y qué caracter querés?: ";
	cin >> caracter;

	cout << endl << tri_inf(num, caracter);
	cout << "\nTREMENDO VISTE. \nNo tene' una monedita pa?";
	
	return (0);
}

string cuadrado(int num, char caracter) {
	
	string cadena;
	
	for (int i=1; i<=num; i++) {
		for (int j=1; j<=num; j++) {
			cadena += caracter;
			cadena += " ";
		}
		cadena += "\n"; 
	}
	
	return (cadena);
}

string tri_sup(int num, char caracter) {
	
	string cadena;
	
	for (int i=1; i<=num; i++) {
		for (int j=1; j<=(num+1-i); j++) {
			cadena += caracter;
			cadena += " ";
		}
		cadena += "\n"; 
	}
	
	return (cadena);
}

string tri_inf(int num, char caracter) {
	
	string cadena;
	
	for (int i=1; i<=num; i++) {
		for (int j=1; j<=i; j++) {
			cadena += caracter;
			cadena += " ";
		}
		cadena += "\n"; 
	}
	
	return (cadena);
}
