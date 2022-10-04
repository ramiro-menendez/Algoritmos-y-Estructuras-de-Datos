#include<iostream>

using namespace std;

bool esPalindromo(int);

int main() {
	
	int num;
	
	cout << "Ingrese un número entero: ";
	cin >> num;
	
	if (esPalindromo(num) == true) {
		cout << "\nEl número " << num << " es palíndromo." << endl;
	}
	else  {
		cout << "\nEl número " << num << " no es palíndromo." << endl;
	}
	
	return(0);
}

bool esPalindromo(int num) {
	
	int flip=0, numAux=num, ultDigito;
	
	while (numAux>0) {
		ultDigito = numAux % 10;
		flip = (flip*10) + ultDigito;
		numAux /= 10;
	}
	
	return(num==flip);
}