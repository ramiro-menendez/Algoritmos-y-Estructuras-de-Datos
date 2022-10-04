#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void intro(int&);
void dibujarFrame(char [], int&, int&, int&);
void turnoJugador(char [], int&, int&);
void turnoIAfacil(char [], int&);
void turnoIAmedio(char [], int&);
void turnoIAdificil(char [], int&);
void ganadorCheck(char [], int&);

//______________________MAIN_______________________________________________________________

int main(int argc, char *argv[]) {
	
	char tab[] = {'.','1','2','3','4','5','6','7','8','9'};
	int turno=1, estadoJuego=0, dificultad;

	/*
	 estadoJuego=0 ---> Empate o juego en curso
	 estadoJuego=1 ---> Gana el jugador (o jugador 1)
	 estadoJuego=-1 --> Gana PC (o jugador 2)

	 IA fácil ----> Elige aleatoriamente la posición
	 IA media ----> Analiza cada posición y elige la que le conviene más
	 				(igual a la dificil pero con un bug que hace que a veces se equivoque)
	 IA dificil --> Igual a la media pero con el bug arreglado
	*/
	
	intro(dificultad);
	
	dibujarFrame(tab, estadoJuego, turno, dificultad);
	
	while (turno<10 && estadoJuego==0) {
		if (turno%2!=0) {
			turnoJugador(tab, dificultad, turno);
			turno++;
		}
		else if (dificultad==1) {
			turnoIAfacil(tab, turno);
			turno++;
		}
		else if (dificultad==2) {
			turnoIAmedio(tab, turno);
			turno++;
		}
		else if (dificultad==3) {
			turnoIAdificil(tab, turno);
			turno++;
		}
		else if (dificultad==4) {
			turnoJugador(tab, dificultad, turno);
			turno++;
		}
		if (turno>4) {
			ganadorCheck(tab, estadoJuego);
		}		
		dibujarFrame(tab, estadoJuego, turno, dificultad);
		
		if (estadoJuego==1 || estadoJuego==-1 || turno==10) {
			break;
		}
	}
	
	system ("pause");

	return 0;
}

//________________________________________________________________________________


void intro(int& dificultad) {
	system ("cls");
	
	cout << endl << "------TATETI------" << endl << endl
		<< "  SELECCIONE LA DIFICULTAD" << endl << endl
		<< "  Fácil ----------> 1" << endl
		<< "  Intermedio -----> 2" << endl
		<< "  Difícil --------> 3" << endl
		<< "  Dos jugadores --> 4" << endl << endl
		<< "  Ingrese la opción: ";
	
	cin >> dificultad;
	
	while (dificultad<1 || dificultad>4){
		cout << "  Opción inválida, reingrese: ";
		cin >> dificultad;
	}
	
}

void dibujarFrame (char tab[], int& estadoJuego, int& turno, int& dificultad) {
	system ("cls");
	
	cout << endl << "------TATETI------" << endl << endl
		<< "       |   |   " << endl
		<< "     " << tab[1] << " | " << tab[2] << " | " << tab[3] << endl
		<< "    ___|___|___" << endl
		<< "       |   |   " << endl
		<< "     " << tab[4] << " | " << tab[5] << " | " << tab[6] << endl
		<< "    ___|___|___" << endl
		<< "       |   |   " << endl
		<< "     " << tab[7] << " | " << tab[8] << " | " << tab[9] << endl
		<< "       |   |   " << endl << endl;
	
	if (estadoJuego==1) {
		if (dificultad==4) {
			cout << "GANA EL JUGADOR 1!" << endl;
		}
		else {
			cout << "GANASTE EN DIFICULTAD ";
			if (dificultad==1) cout << "FACIL";
			if (dificultad==2) cout << "MEDIA";
			if (dificultad==3) cout << "ALTA";
			cout << "!" << endl;
		}
	}
	else if (estadoJuego==-1) {
		if (dificultad==4) {
			cout << "GANA EL JUGADOR 2!" << endl;
		}
		else {
			cout << "PERDISTE EN DIFICULTAD ";
			if (dificultad==1) cout << "FACIL";
			if (dificultad==2) cout << "MEDIA";
			if (dificultad==3) cout << "ALTA";
			cout << "!" << endl;
		}
	}
	else if (estadoJuego==0 && turno==10) {
		if (dificultad==4) {
			cout << "LOS DOS EMPATAN!" << endl;
		}
		else {
			cout << "EMPATASTE EN DIFICULTAD ";
			if (dificultad==1) cout << "FACIL";
			if (dificultad==2) cout << "MEDIA";
			if (dificultad==3) cout << "ALTA";
			cout << "!" << endl;
		}
	}
	else {
		if (dificultad==4 && turno%2==0) {
			cout << "Jugador 2, elegí una posición: ";
		}
		else if (dificultad==4) {
			cout << "Jugador 1, elegí una posición: ";
		}
		else {
			cout << "Elegí una posición: ";
		}
	}
}

void turnoJugador(char tab[], int& dificultad, int& turno) {
	int posicion;
	
	cin >> posicion;
	
	while (tab[posicion]=='X' || tab[posicion]=='O') {
		cout << "Jugada inválida, volvé a elegir: ";
		cin >> posicion;
	}
	
	if (dificultad==4 && turno%2==0) {
		tab[posicion]='O';
	}
	else {
		tab[posicion]='X';
	}
}


void turnoIAfacil(char tab[], int& turno) {
	int posicion;
	
	srand(time(NULL));
	
	do {
		posicion = rand()%9 + 1;
	} while (tab[posicion]=='X' || tab[posicion]=='O');
	
	tab[posicion]='O';
}

void turnoIAmedio(char tab[], int& turno) {
	int posicion;
	
	srand(time(NULL));
	if (turno==2) {
		do {
			posicion = rand()%9 + 1;
		} while (tab[posicion]=='X' || tab[posicion]=='O');
	}
	else {
		if (tab[1]=='1' && ((tab[4]!='4' && tab[7]!='7') || (tab[5]!='5' && tab[9]!='9') || (tab[2]!='2' && tab[2]!='2'))) {
			posicion=1;
		}
		else if (tab[2]=='2' && ((tab[1]!='1' && tab[3]!='3') || (tab[5]!='5' && tab[8]!='8'))) {
			posicion=2;
		}
		else if (tab[3]=='3' && ((tab[1]!='1' && tab[2]!='2') || (tab[5]!='5' && tab[7]!='7') || (tab[6]!='6' && tab[9]!='9'))) {
			posicion=3;
		}
		else if (tab[4]=='4' && ((tab[1]!='1' && tab[7]!='7') || (tab[5]!='5' && tab[6]!='6'))) {
			posicion=4;
		}
		else if (tab[5]=='5' && ((tab[4]!='4' && tab[6]!='6') || (tab[2]!='2' && tab[8]!='8') || (tab[7]!='7' && tab[3]!='3') || (tab[1]!='1' && tab[9]!='9'))) {
			posicion=5;
		}
		else if (tab[6]=='6' && ((tab[4]!='4' && tab[5]!='5') || (tab[3]!='3' && tab[9]!='9'))) {
			posicion=6;
		}
		else if (tab[7]=='7' && ((tab[4]!='4' && tab[1]!='1') || (tab[5]!='5' && tab[3]!='3') || (tab[8]!='8' && tab[9]!='9'))) {
			posicion=7;
		}
		else if (tab[8]=='8' && ((tab[7]!='7' && tab[9]!='9') || (tab[5]!='5' && tab[2]!='2'))) {
			posicion=8;
		}
		else if (tab[9]=='9' && ((tab[7]!='7' && tab[8]!='8') || (tab[3]!='3' && tab[6]!='6') || (tab[1]!='1' && tab[5]!='5'))) {
			posicion=9;
		}
		else {
			do {
				posicion = rand()%9 + 1;
			} while (tab[posicion]=='X' || tab[posicion]=='O');
		}
	}
	
	tab[posicion]='O';
}

void turnoIAdificil(char tab[], int& turno) {
	int posicion;
	
	srand(time(NULL));
	if (turno==2) {
		do {
			posicion = rand()%9 + 1;
		} while (tab[posicion]=='X' || tab[posicion]=='O');
	}
	else {
		if (tab[1]=='1' && ((tab[4]=='O' && tab[7]=='O') || (tab[5]=='O' && tab[9]=='O') || (tab[2]=='O' && tab[3]=='O'))) {
			posicion=1;
		}
		else if (tab[2]=='2' && ((tab[1]=='O' && tab[3]=='O') || (tab[5]=='O' && tab[8]=='O'))) {
			posicion=2;
		}
		else if (tab[3]=='3' && ((tab[1]=='O' && tab[2]=='O') || (tab[5]=='O' && tab[7]=='O') || (tab[6]=='O' && tab[9]=='O'))) {
			posicion=3;
		}
		else if (tab[4]=='4' && ((tab[1]=='O' && tab[7]=='O') || (tab[5]=='O' && tab[6]=='O'))) {
			posicion=4;
		}
		else if (tab[5]=='5' && ((tab[4]=='O' && tab[6]=='O') || (tab[2]=='O' && tab[8]=='O') || (tab[7]=='O' && tab[3]=='O') || (tab[1]=='O' && tab[9]=='O'))) {
			posicion=5;
		}
		else if (tab[6]=='6' && ((tab[4]=='O' && tab[5]=='O') || (tab[3]=='O' && tab[9]=='O'))) {
			posicion=6;
		}
		else if (tab[7]=='7' && ((tab[4]=='O' && tab[1]=='O') || (tab[5]=='O' && tab[3]=='O') || (tab[8]=='O' && tab[9]=='O'))) {
			posicion=7;
		}
		else if (tab[8]=='8' && ((tab[7]=='O' && tab[9]=='O') || (tab[5]=='O' && tab[2]=='O'))) {
			posicion=8;
		}
		else if (tab[9]=='9' && ((tab[7]=='O' && tab[8]=='O') || (tab[3]=='O' && tab[6]=='O') || (tab[1]=='O' && tab[5]=='O'))) {
			posicion=9;
		}
		else if (tab[1]=='1' && ((tab[4]=='X' && tab[7]=='X') || (tab[5]=='X' && tab[9]=='X') || (tab[2]=='X' && tab[3]=='X'))) {
			posicion=1;
		}
		else if (tab[2]=='2' && ((tab[1]=='X' && tab[3]=='X') || (tab[5]=='X' && tab[8]=='X'))) {
			posicion=2;
		}
		else if (tab[3]=='3' && ((tab[1]=='X' && tab[2]=='X') || (tab[5]=='X' && tab[7]=='X') || (tab[6]=='X' && tab[9]=='X'))) {
			posicion=3;
		}
		else if (tab[4]=='4' && ((tab[1]=='X' && tab[7]=='X') || (tab[5]=='X' && tab[6]=='X'))) {
			posicion=4;
		}
		else if (tab[5]=='5' && ((tab[4]=='X' && tab[6]=='X') || (tab[2]=='X' && tab[8]=='X') || (tab[7]=='X' && tab[3]=='X') || (tab[1]=='X' && tab[9]=='X'))) {
			posicion=5;
		}
		else if (tab[6]=='6' && ((tab[4]=='X' && tab[5]=='X') || (tab[3]=='X' && tab[9]=='X'))) {
			posicion=6;
		}
		else if (tab[7]=='7' && ((tab[4]=='X' && tab[1]=='X') || (tab[5]=='X' && tab[3]=='X') || (tab[8]=='X' && tab[9]=='X'))) {
			posicion=7;
		}
		else if (tab[8]=='8' && ((tab[7]=='X' && tab[9]=='X') || (tab[5]=='X' && tab[2]=='X'))) {
			posicion=8;
		}
		else if (tab[9]=='9' && ((tab[7]=='X' && tab[8]=='X') || (tab[3]=='X' && tab[6]=='X') || (tab[1]=='X' && tab[5]=='X'))) {
			posicion=9;
		}
		else {
			do {
				posicion = rand()%9 + 1;
			} while (tab[posicion]=='X' || tab[posicion]=='O');
		}
	}
	cout << ".";
	tab[posicion]='O';
}


void ganadorCheck(char tab[], int& estadoJuego) {
	if (tab[1]==tab[2] && tab[1]==tab[3]) {
		if (tab[1]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
	else if (tab[1]==tab[4] && tab[1]==tab[7]) {
		if (tab[1]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
	else if (tab[1]==tab[5] && tab[1]==tab[9]) {
		if (tab[1]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
	else if (tab[5]==tab[2] && tab[5]==tab[8]) {
		if (tab[5]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
	else if (tab[5]==tab[4] && tab[5]==tab[6]) {
		if (tab[5]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
	else if (tab[5]==tab[7] && tab[5]==tab[3]) {
		if (tab[5]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
	else if (tab[3]==tab[6] && tab[3]==tab[9]) {
		if (tab[3]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
	else if (tab[7]==tab[8] && tab[7]==tab[9]) {
		if (tab[7]=='X') {
			estadoJuego=1;
		}
		else {
			estadoJuego=-1;
		}
	}
}
