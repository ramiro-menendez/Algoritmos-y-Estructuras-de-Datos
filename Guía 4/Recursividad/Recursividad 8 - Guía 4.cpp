//Convertir decimal a binario.

#include<iostream>

using namespace std;

int binario(int);

//----------------------------------

int main() {
	
	for (int i=1; i<=30; i++) {
		cout << binario(i) << endl;
	}
	
	return 0;
}

//----------------------------------

int binario(int num) {
	if (num/2==0) return num%2;
	return (num%2) + 10*binario(num/2);
}
