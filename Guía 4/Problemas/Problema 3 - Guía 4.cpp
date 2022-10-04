#include<iostream>

using namespace std;

int cantDigitos(int);

int main() {
	
	int num;
	
	cout << "Ingrese un número entero: ";
	cin >> num;
	
	cout << "El número " <<num << " tiene " << cantDigitos(num);
	
	if (cantDigitos(num)==1) {
		cout << " dígito." << endl;
	}
	else {
		cout << " dígitos." << endl;
	}
	
	return(0);
}

int cantDigitos(int num) {
	int cant=0;
	
	do {
		cant++;
		num/=10;
	} while(num!=0);
	
	return(cant);
}
