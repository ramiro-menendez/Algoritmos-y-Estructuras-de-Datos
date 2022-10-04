//Cuenta regresiva de despegue.

#include<iostream>
#include<windows.h>

using namespace std;

void cuentaRegresiva(int);

//----------------------------------

int main() {
	
	int n;
	cin >> n;

	cuentaRegresiva(n);
	
	return 0;
}

//----------------------------------

void cuentaRegresiva(int n) {
	if (n==0) {
		cout << "DESPEGUE";
		return;
	}
	if (n<=10 && n>0) {
		cout << n << " - ";
		Sleep(1000);
		cuentaRegresiva(n-1);
	}
	else {
		if (n%10==0) {
			cout << n << " - ";
		}
		Sleep(1000);
		cuentaRegresiva(n-1);
	}
}