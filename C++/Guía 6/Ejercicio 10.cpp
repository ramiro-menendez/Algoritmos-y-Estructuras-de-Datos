#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void countVowels(char [], int&, int&, int&, int&, int&);
float spacePer(char []);
float telegramCost(char []);
int word7lett(char []);

//----------------------------------------------
int main() {
	
	char telegram[64];
	int a=0,e=0,i=0,o=0,u=0, more7letters;
	float spacePercentage, cost;
	
	cout << "Leyendo el telegrama..." << endl;
	gets(telegram);
	countVowels(telegram, a, e, i, o, u);
	
	spacePercentage=spacePer(telegram);
	more7letters=word7lett(telegram);
    cost=telegramCost(telegram);
	
	cout << endl << "El telegrama ingresado consta de:" << endl
		<< "-> " << more7letters << " palabras con mas de 7 letras"
		<< endl << "-> " << "Ocurrencia de vocales: " << a+e+i+o+u << endl
		<< "    a: " << a << endl << "    e: " << e << endl 
		<< "    i: " << i << endl << "    o: " << o << endl
		<< "    u: " << u << endl
		<< "-> " << fixed << setprecision(2) << spacePercentage
		<< "% de espacios en blanco sobre el total de caracteres."
		<< endl << "-> Costo del telegrama: $" << fixed << setprecision(2)
		<< cost << endl;
	
	return 0;
}
//----------------------------------------------

void countVowels(char telegram[], int& a, int& e, int& i, int& o, int& u) {
	int iteration=0;
	
	while (telegram[iteration]) {
		switch (telegram[iteration]) {
		case 'A':
        case 'á':
		case 'a': a++;
		break;
		case 'E':
        case 'é':
		case 'e': e++;
		break;
		case 'I':
        case 'í':
		case 'i': i++;
		break;
		case 'O':
        case 'ó':
		case 'o': o++;
		break;
		case 'U':
        case 'ú':
		case 'u': u++;
		break;
		}
		iteration++;
	}
}

float spacePer(char telegram[]) {
	float result;
	int spaceQuantity=0, i=0;
	
	while (telegram[i]) {
		if (telegram[i]==' ') {
			spaceQuantity++;
		}
		i++;
	}
	
	result=(float)spaceQuantity*100/strlen(telegram); 
	
	return result;
}

float telegramCost(char telegram[]) {
	int wordCount=1, i=0;
	
	while (telegram[i]) {
		if (telegram[i]==' ') {
			wordCount++;
		}
		i++;
	}
	
	return (float)wordCount*5.2;
}

int word7lett(char telegram[]) {
	int wordQuantity=0, i=0, k=0;
	
	while (telegram[i]) {
		if (telegram[i]!=' ') {
			k++;
		}
        else {
            k=0;
        }
		if (k==8) {
			wordQuantity++;
            k=0;
		}
		i++;
	}
	return wordQuantity;
}
