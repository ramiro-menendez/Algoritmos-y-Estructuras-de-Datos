#include<iostream>

using namespace std;

//----------------------------------

int main() {
	
	int N, cont=0;
	cin >> N;

	if (N%2==0) {
		N/=2;
		cont++;
	}
	else {
		N++;
		cont++;
	}
	if (N>=100) {
		N/=100;
		cont++;
	}
	else if (N>=10 && N<100) {
		N/=10;
		cont++;
	}
	if (N%3==0) {
		N--;
		cont++;
	}

	cout << N << " " << cont << endl;

	return 0;
}
