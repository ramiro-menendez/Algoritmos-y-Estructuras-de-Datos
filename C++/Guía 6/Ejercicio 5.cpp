#include <iostream>
#include <string.h>

using namespace std;


//----------------------------------------------
int main() {
	
	char a[20], b[20];
	int tamA, tamB;
	
	cin.getline(a, 20, '\n');
	cin.getline(b, 20, '\n');
	
	tamA=strlen(a);
	tamB=strlen(b);
	
	if (tamA<tamB) {
		cout << a << b << a << endl;
	}
	else if (tamB<tamA) {
		cout << b << a << b << endl;
	}
	
	
	return 0;
}
//----------------------------------------------
