//Verificación capicúa.

#include<iostream>

using namespace std;

bool esCapicua(int);
int cifras (int);
int potencia (int, int);

//-------------------------------------------------

int main(int argc, char *argv[]) {
	cout << "capicua(1)=" << esCapicua(1) << endl;
	cout << "capicua(11)=" << esCapicua(11) << endl;
	cout << "capicua(12)=" << esCapicua(12) << endl;
	cout << "capicua(121)=" << esCapicua(121) << endl;
	cout << "capicua(123)=" << esCapicua(123) << endl;
	cout << "capicua(123321)=" << esCapicua(123321) << endl;
	cout << "capicua(122334)=" << esCapicua(123324) << endl;
	return 0;
}

//-------------------------------------------------

int potencia (int base, int exp) {
	if (exp==0) return 1;
	return base * potencia (base, exp-1);
}

int cifras (int n) {
	if (n<10) return 1;
	return 1 + cifras(n/10);
}

bool esCapicua(int n) {
	if (n<10) return true;
	if (n%10 != (n/(potencia(10, cifras(n)-1)))) return false;
	return esCapicua((n%potencia(10, cifras(n)-1))/10);
}
