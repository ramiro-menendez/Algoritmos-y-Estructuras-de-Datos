#include<iostream>

using namespace std;

double potencia(int,int);

int main() {
	
	int a, b;
	
	cout << "Ingrese dos números, una base y un exponente: ";
	cin >> a >> b;
	
	cout << a << " elevado a " << b << " es " << potencia(a,b) << endl;
	
	return(0);
}

double potencia(int a, int b) {
	
	double result=1;
	
	if (a==0 && b==0) {
		//indeterminado.
		cout << "INDETERMINADO";
	}
	else if (b>0) {
		for (int i=1; i<=b; i++) {
			result*=a;
		}
	}
	else if (b<0) {
		for (int i=-1; i>=b; i--) {
			result/=a;
		}
	}
	
	return(result);
}