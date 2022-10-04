#include<iostream>

int potencia(int, int);

//----------------------------------

int main() {
	
	int num1, num2;
	std::cin >> num1 >> num2;
	
	std::cout << potencia(num1, num2) << std::endl;
	
	return 0;
}

//----------------------------------

int potencia(int base, int exp) {
	if (exp==0) return 1;
	return base * potencia(base, exp-1);
}

