//Convertir binario a decimal.

#include<iostream>

using namespace std;

int decimal(int);
int cifras(int);
int potencia(int, int);

//----------------------------------
int main() {
	
	int num;
	cin >> num;

	cout << decimal(num);
	
	return 0;
}
//----------------------------------

int potencia (int base, int exp) {
	if (exp==0) return 1;
	return base * potencia(base, exp-1);
}

int cifras (int n) {
	if (n<10) return 1;
	return 1 + cifras(n/10);
}

int decimal(int num) {
	if (num<2) return num;
	return (num/potencia(10,(cifras(num)-1)))*(potencia(2,cifras(num)-1)) + decimal(num%potencia(10, cifras(num)-1));
}