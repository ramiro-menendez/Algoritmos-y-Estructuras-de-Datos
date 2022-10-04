//iccanobif.

#include<iostream>

using namespace std;

void iccanobif(int);
int fibonacci(int);

//----------------------------------

int main() {
	
	int num;
	cin >> num;
	
	iccanobif(num);
	
	return 0;
}

//----------------------------------

int fibonacci(int n) {
	if (n==1) return 1;
	if (n==2) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

void iccanobif(int n) {
	if (n==1) {
		cout << 1;
		return;
	}	
	cout << fibonacci(n) << " ";
	iccanobif(n-1);
}