#include <iostream>
#include <string.h>

using namespace std;

	//cin.getline(nombre, 8, '\n');
	//getline(cin, nombre, delimitador); ¿solo para string?
	//gets(entrada);
//----------------------------------------------
int main() {

	char input[30], surname[15], name;
	int i;

	cin.getline(input, 30, '\n');

	for(i=0; i<strlen(input); i++) {
		input[i]=tolower(input[i]);
	} 

	i=0;
	while(input[i]!=' ' && i<strlen(input)) {
		surname[i]=input[i];
		i++;
	}

	surname[i]='\0';
	i++;
	name=input[i];

	cout << name << surname << "@frsf.utn.edu.ar" << endl;

	return 0;
}
//----------------------------------------------
