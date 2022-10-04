#include<iostream>

using namespace std;

bool esAlternante(int);

//--------------------------------------------------------------------------
int main() {
	
	int num;
	
	cout << "Ingrese un número de al menos dos cifras: ";
	cin >> num;
	
	while(num<10 && num>-10) {
		cout << "El número tiene sólo un dígito, reigréselo: ";
		cin >> num;
	}
	
	if (esAlternante(num)==true) {
		cout << "El número " << num << " es alternante." << endl;
	}
	else {
		cout << "El número " << num << " no es alternante." << endl;
	}

	return(0);
}
//----------------------------------------------------------------------------

bool esAlternante(int num) {
	
	bool alternante;
	int numAux;
	
	numAux=abs(num);
	//num=abs(num);
	
	while (numAux>9) {
		
		if((numAux%2)!=((numAux/10)%2)) {
			numAux/=10;
			alternante=true;
		}
		else {
			numAux=0;
			alternante=false;
		}
		
	}
	return(alternante);
}

//Función no utilizada, devuelve la cantidad de dígitos que tiene un número entero.

/*int cantDigitos(int num) {
    int cant=0;

    num=abs(num);

    if (num!=0) {
        while(num>0) {
        num/=10;
        cant++;
        }
    }
    else {
        cant++;
    }

    return(cant);
}*/