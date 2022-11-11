#include<iostream>
#include<string.h>

using namespace std;

//----------------------------------------------
int main() {
	
    char A[10], B[10];
    int tamA, tamB;

    gets(A);
    gets(B);

    tamA=strlen(A);
    tamB=strlen(B);

    if(tamA<tamB) {
        cout << A << B << A << endl;
    }
    else {
        cout << B << A << B << endl;
    }

	
	return 0;
}
//----------------------------------------------
