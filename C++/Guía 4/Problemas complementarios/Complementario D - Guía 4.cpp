#include<iostream>

int ordinal(char);

int main() {

	char caracter;

	std::cout << "Ingrese una letra minúscula: ";
	std::cin >> caracter;

	std::cout << "ASCII: " << ordinal(caracter) << std::endl;

	return(0);
}

int ordinal(char caracter) {

	int num;

	if (caracter < 'a' || caracter > 'z') {
		num = 0;
	}
	else {
		num = caracter;
	}

	return(num);
}