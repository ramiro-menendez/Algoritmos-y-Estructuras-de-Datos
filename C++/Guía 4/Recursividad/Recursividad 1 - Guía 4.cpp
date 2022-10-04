#include<iostream>

using namespace std;

int numDigitos(int);
int numDigitosPares(int);
int factorial(int);
bool tienePar(int);
int sumaMultN(int, int);

//-----------------------------

int main() {
	
	int num, N;
	cin >> num >> N;
	
	cout << numDigitos(num) << endl;
	cout << numDigitosPares(num) << endl;
	cout << factorial(num) << endl;
	cout << tienePar(num) << endl;
    cout << sumaMultN(num, N) << endl;
	
	return(0);
}

//-------------------------------

int numDigitos(int num) {
	if (num<10) return 1;
	return 1 + numDigitos(num/10);
}

int numDigitosPares(int n) {
	if (n<10 && n%2==0) return 1;
	if (n<10 && n%2==1) return 0;
	if (n%2==0) return 1 + numDigitosPares(n/=10);
	return numDigitosPares(n/=10);
}

int factorial(int num) {
	if (num==0) return 1;
	return num * factorial(num-1);
}

bool tienePar(int num) {
	if (num%2==0 || num<10) return num%2==0;
	return tienePar(num/10);
}

int sumaMultN(int num, int N) {
    if (num<10 && num%N==0) return num;
    if (num%10%N==0) return num%10 + sumaMultN(num/10, N);
}


