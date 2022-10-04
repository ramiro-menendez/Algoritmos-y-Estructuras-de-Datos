#include<iostream>
#include<cstring>

using namespace std;

void formatear(char [], int&);

int main(int argc, char const *argv[]) {
	
	char cadena[128];
	int cantFrases=0;
	
	gets(cadena);
	
	formatear(cadena, cantFrases);
	
	cout << cadena;
	cout << endl << endl << cantFrases << endl;
	
	return 0;
}

void formatear(char cadena[], int& cantFrases) {
	int i=0, j=0;
	char aux[128];

	strcpy(aux, cadena);

	cadena[0]=toupper(cadena[0]);
	
	while(cadena[i]) {
		if (aux[i]=='#') {
			cadena[j++]='\n';
			cadena[j++]=' ';
			cadena[j++]=' ';
			cadena[j++]=' ';
			if (aux[i-1]=='.') {
				cadena[j++]=toupper(aux[++i]);
			}
		}
		else if (aux[i]=='.') {
			cadena[j++]='.';
			cantFrases++;
			if (aux[i+1]!='#') {
				cadena[j++]=toupper(aux[++i]);
			}
		}
		else {
			cadena[j++]=aux[i];  
		}
		
		i++;
	}
	cadena[j]='\0';
}

