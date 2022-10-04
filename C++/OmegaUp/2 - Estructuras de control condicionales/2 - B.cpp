#include<iostream>

using namespace std;

//----------------------------------

int main() {
	
	int A, B, C;
	cin >> A >> B >> C;

	if (A==B && A==C) {
		cout << "I" << endl;
	}
	else if (A<=B && B<=C) {
		cout << "C" << endl;
	}
	else if (A>=B && B>=C) {
		cout << "D" << endl;
	}
	else {
		cout << "X" << endl;
	}

	return 0;
}
