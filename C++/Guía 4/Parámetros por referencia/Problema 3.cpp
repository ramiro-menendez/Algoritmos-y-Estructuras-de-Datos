#include <iostream>
using namespace std;

void Mover(float&, float&, char, float);

//--------------------------------------------------------------

int main() {
	
	float X, Y, amplitud;
	char direccion;
	
	cout << "Ingrese las coordenadas iniciales (X e Y):";
	cin >> X >> Y;
	
	cout << "Ahora, ingrese la dirección y amplitud del movimiento:";
	cin >> direccion >> amplitud;

	Mover(X, Y, direccion, amplitud);

	cout << "Las coordenadas finales son: " << X << " " << Y << endl;

	return 0;
}

//------------------------------------------------------------------

void Mover(float& posX, float& posY, char direccion, float amplitud) {
	switch(direccion) {
		case 'a':
		case 'A':
			posY+=amplitud;
			break;
		case 'b':
		case 'B':
			posY+=amplitud;
			posX+=amplitud;
			break;
		case 'c':
		case 'C':
			posX+=amplitud;
			break;
		case 'd':
		case 'D':
			posX+=amplitud;
			posY-=amplitud;
			break;
		case 'e':
		case 'E':
			posY-=amplitud;
			break;
		case 'f':
		case 'F':
			posX-=amplitud;
			posY-=amplitud;
			break;
		case 'g':
		case 'G':
			posX-=amplitud;
			break;
		case 'h':
		case 'H':
			posX-=amplitud;
			posY+=amplitud;
			break;
	}
}
