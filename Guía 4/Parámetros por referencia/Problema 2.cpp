#include <iostream>
using namespace std;

void chrtoupper(char & c);

int main() {
	
	char caracter;
	cin >> caracter;
	
	chrtoupper(caracter);
	cout << caracter;
	
	return 0;
}

void chrtoupper(char & c) {
	if (c>='a' && c<='z') {
		c -= abs('a'-'A');
	}
}
