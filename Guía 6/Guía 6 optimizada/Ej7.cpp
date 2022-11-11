#include<iostream>
#include<string.h>

using namespace std;

//----------------------------------------------
int main() {
	
   char A[16], B[16];
   int i=0, j=0;
   bool anagrama=true, coincidencia=false;

   gets(A);
   gets(B);

   while(A[i] && anagrama) {
    A[i]=tolower(A[i]);

    j=0;
    coincidencia=false;
    while(B[j] && !coincidencia) {
        B[j]=tolower(B[j]);

        if(A[i]==B[j]) {
            B[j]='-';
            coincidencia=true;
        }
        j++;
    }
    if(!coincidencia) {
        anagrama=false;
    }
    i++;
   }

   if(anagrama) {
    cout << "true" << endl;
   }
   else {
    cout << "false" << endl;
   }

	return 0;
}
//----------------------------------------------
