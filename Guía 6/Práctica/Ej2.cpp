#include<iostream>
#include<string.h>

using namespace std;

//----------------------------------------------
int main() {
	
    char input[15];
    bool validates=true;
    int i=1;

    cin.getline(input, 15, '\n');

    if(!isalpha(input[0]) || strlen(input)!=8) {
        validates=false;
    }

    while(input[i]!='\0' && validates && i<8) {
        if(!isalnum(input[i])) {
            validates=false;
        }
        i++;
    }

    if(validates) {
        cout << "true";
    }
    else {
        cout << "false";
    }
	
	return 0;
}
//----------------------------------------------
