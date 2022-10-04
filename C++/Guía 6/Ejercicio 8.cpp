#include <iostream>
#include <cstring>

using namespace std;

void cleanNoise(char []);

//----------------------------------------------
int main() {
	
	char phrase[64];

    gets(phrase);

    cleanNoise(phrase);

    cout << phrase << endl;
    
	return 0;
}
//----------------------------------------------

void cleanNoise(char phrase[]) {
    int i=0, j=0;

    while(phrase[i]) {
        if (!isdigit(phrase[i])) {
            phrase[j++]=phrase[i];
        }
        i++;
    }
    phrase[j]='\0';
}