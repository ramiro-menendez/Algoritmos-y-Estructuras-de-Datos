#include <iostream>
#include <cstring>

using namespace std;

//----------------------------------------------
int main() {
	
	char id[20];
    int idTam;

    gets(id);

    idTam=strlen(id);

    if (isalpha(id[0]) && idTam==8) {
        cout << "true" << endl;
    }
    else cout << "false" << endl;


	return 0;
}
//----------------------------------------------
