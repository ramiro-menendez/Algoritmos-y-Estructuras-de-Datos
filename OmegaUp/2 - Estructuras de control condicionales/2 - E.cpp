#include<iostream>

using namespace std;

//----------------------------------

int main() {
	
	int L;
	cin >> L;

	if (L>=0 && L<=3) {
		cout << "BEBE" << endl;
	}
	else if (L>=4 && L<=14) {
		cout << "NINO" << endl;
	}
	else if (L>=15 && L<=18) {
		cout << "JOVEN" << endl;
	}
	else if (L>=19 && L<=65) {
		cout << "ADULTO" << endl;
	}
	else {
		cout << "ADULTO 3RA" << endl;
	}
	
	return 0;
}
