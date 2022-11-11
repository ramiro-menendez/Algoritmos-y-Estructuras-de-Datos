#include<iostream>
#include<string.h>

using namespace std;

//----------------------------------------------
int main() {
	
    char input[100], code[10];
    int i=0, codeTam;

    gets(input);
    gets(code);
    codeTam=(strlen(code));

    while(input[i]) {
        input[i]=tolower(input[i]);

        if(input[i]!=code[0]) {
            i++;
        }
        else {
            int j=0;
            while(input[i+j]==code[j] && j<codeTam) {
                j++;
            }
            if(j==codeTam) {
                for(j=0; j<codeTam; j++) {
                    input[i+j]='X';
                }
                i+=codeTam;
            }
            else {
                i++;
            }
        }
    }

    cout << input << endl;

	return 0;
}
//----------------------------------------------
