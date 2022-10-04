#include<iostream>

using namespace std;

//----------------------------------

int main() {
	
	int A, B, C, n;
	cin >> A >> B >> C;

	if (A<B && B<C) {
		n=0;
	}
	else if ((A<C && C<B) || (B<A && A<C) || (C<B && B<A)) {
		n=1;
	}
	else {
		n=2;
	}

	return 0;
}
