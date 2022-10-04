#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void dibujarFrame (string, string, int, int, int);
int tamano(int, string&);
void ingresoLetra (string&, string&, string&, int&, int, int&);

struct Palabras {
	string p0 = "EDIFICIO";
	string p1 = "AVION";
	string p2 = "COMPUTADORA";
	string p3 = "GAVIOTA";
	string p4 = "BICICLETA";
	string p5 = "CELULAR";
	string p6 = "HELADERA";
	string p7 = "PESCADO";
	string p8 = "BANDERA";
	string p9 = "TIERRA";
}pal;

//----------------------------------------------
int main() {
	
	string espacios = "_________________", palabra, letrasErradas;
	int vidas=6, tam, letrasAdivinadas=0, palabraAzar, estadoJuego=0;
	
	srand(time(NULL));
	palabraAzar = rand()%10;
	
	tam = tamano(palabraAzar, palabra);
	
	while (vidas>0 && letrasAdivinadas<=tam) {
		
		dibujarFrame (espacios, letrasErradas, vidas, tam, estadoJuego);
		ingresoLetra (espacios, palabra, letrasErradas, letrasAdivinadas, tam, vidas);
		
		if (letrasAdivinadas==tam) {
			estadoJuego=1;
		}
		else if (vidas==0) {
			estadoJuego==-1;
		}
		
	}
	
	return 0;
}
//----------------------------------------------

void dibujarFrame (string espacios, string letrasErradas, int vidas, int tam, int estadoJuego) {
	
	system ("cls");
	
	cout << endl << endl
		<< "    -----AHORCADO------" << endl << endl
		<< "        _____" << endl
		<< "       |     |       Vidas restantes: " << vidas << endl
		<< "       |     O" << endl
		<< "       |" << endl
		<< "       |" << endl
		<< "     __|__" << "     ";
	
	for (int i=0; i<tam; i++) {
		cout << espacios[i] << " ";
	}
	
	cout << endl << endl
		<< "Letras no adivinadas: ";
	for (int i=0; i<(letrasErradas.length()); i++) {
		cout << letrasErradas[i] << " - ";
	}
	cout << endl << endl;
	if (estadoJuego==0) {
		cout << "Ingrese una letra: ";
	}
	else if (estadoJuego==-1) {
		cout << "PERDISTE!";
	}
	else if (estadoJuego==1) {
		cout << "GANASTE!";
	}
}

int tamano(int palabraAzar, string& palabra) {
	int tam;
	
	switch (palabraAzar) {
	case 0: tam = pal.p0.length();
	palabra = pal.p0;
	break;
	case 1: tam = pal.p1.length();
	palabra = pal.p1;
	break;
	case 2: tam = pal.p2.length();
	palabra = pal.p2;
	break;
	case 3: tam = pal.p3.length();
	palabra = pal.p3;
	break;
	case 4: tam = pal.p4.length();
	palabra = pal.p4;
	break;
	case 5: tam = pal.p5.length();
	palabra = pal.p5;
	break;
	case 6: tam = pal.p6.length();
	palabra = pal.p6;
	break;
	case 7: tam = pal.p7.length();
	palabra = pal.p7;
	break;
	case 8: tam = pal.p8.length();
	palabra = pal.p8;
	break;
	case 9: tam = pal.p9.length();
	palabra = pal.p9;
	break;
	}
	
	return tam;
}

void ingresoLetra (string& espacios, string& palabra, string& letrasErradas, int& letrasAdivinadas, int tam, int& vidas) {
	char letra;
	bool bandera=false;
	
	cin >> letra;
	letra=toupper(letra);
	
	for (int i=0; i<tam; i++) {
		if (palabra[i]==letra) {
			letrasAdivinadas++;
			espacios[i]=letra;
			palabra[i]='/';
			bandera=true;
		}
	}
	
	if (!bandera) {
		letrasErradas.push_back(letra);
		vidas--;
	}
}
