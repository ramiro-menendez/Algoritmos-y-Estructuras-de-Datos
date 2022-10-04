//Invertir número dado.

#include<iostream>

void invertir(int);

//-------------------------------------------------

int main() {
	
	int num;
	std::cin >> num;
	invertir(num);
	
	return 0;
}

//-------------------------------------------------

void invertir(int num) {
	std::cout << num%10;
	if (num>9) return invertir(num/10);
}
