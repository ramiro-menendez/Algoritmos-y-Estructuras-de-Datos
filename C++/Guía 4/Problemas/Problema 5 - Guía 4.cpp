#include<iostream>
#include<cmath>

using namespace std;

int SUMULPOT(int, int, int);

int main() {
	
	int num1, num2, num3;
	
	cout << "Ingrese tres números enteros: ";
	cin >> num1 >> num2 >> num3;
	
	cout << SUMULPOT(num1, num2, num3) << endl;
	
	return(0);
}

int SUMULPOT(int num1, int num2, int num3) {
	int resultado=0;
	
	if (num3>0) {
		for (int i=num1; i<=num2; i+=num3) {
			resultado+=i;
		}
	}
	else if (num3<0) {
        resultado=1;
		for (int i=num2; i>=num1; i+=num3) {
			resultado*=i;
		}
	}
	else {
		if (pow(num1,num2) < pow(num2,num1)) {
			resultado=pow(num2,num1);
		}
		else {
			resultado=pow(num1,num2);
		}
	}
	return(resultado);
}
