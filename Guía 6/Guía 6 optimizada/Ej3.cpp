#include<iostream>
#include<string.h>

using namespace std;

//----------------------------------------------
int main() {
	
    char input[50], aux[50];
    int i=0, j=0;
    
    gets(input);
    
    while(input[i]) {
        input[i]=tolower(input[i]);

        if(input[i]!=' ') {
            aux[j]=input[i];
            j++;
        }

        i++;
    }
    aux[j]='\0';

    j--;
    i=0;
    while(j>=0) {
        input[i]=aux[j];
        j--;
        i++;
    }
    input[i]='\0';

    if(strcmp(input, aux)==0) {
        cout << "True";
    }
    else {
        cout << "False";
    }
	
	return 0;
}
//----------------------------------------------
