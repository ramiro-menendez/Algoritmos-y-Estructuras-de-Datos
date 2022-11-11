#include<iostream>
#include<string.h>

using namespace std;

//----------------------------------------------
int main() {
	
    char A[100];
    int w=0, c=0, i=0;

    gets(A);

    while(A[i]) {
        if(A[i]==' ') {
            w++;
        }
        c++;
        i++;
    }
    w++;

    cout << w << endl << c << endl;

	
	return 0;
}
//----------------------------------------------
