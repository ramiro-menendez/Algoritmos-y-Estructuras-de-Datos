#include<iostream>

int potencia (int, int);

//----------------------------------

int main() {
	
	int a, b;
	std::cin >> a >> b;
	
	std::cout << potencia(a, b) << std::endl;
	
	return 0;
}

//----------------------------------

int potencia (int base, int exp) {
	if (exp==0) return 1;
	return base * potencia(base, exp-1);
}

