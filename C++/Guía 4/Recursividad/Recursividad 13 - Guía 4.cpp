//Cuenta regresiva de despegue.

#include<iostream>

using namespace std;

void explotar(int, int);

//----------------------------------

int main() {
	
	int n, b;
	cin >> n >> b;

	explotar(n, b);
	
	return 0;
}

//----------------------------------

void explotar(int n, int b) {
	int n1, n2;
	if (n>b) {
		n1=(n/b);
		n2=(n-n1);
		if(n1>b) {
			explotar(n1, b);
		}
		else {
			cout << n1 << " ";
		}
		if(n2>b) {
			explotar(n1, b);
		}
		else {
			cout << n2 << " ";
		}
	}
	return;
}