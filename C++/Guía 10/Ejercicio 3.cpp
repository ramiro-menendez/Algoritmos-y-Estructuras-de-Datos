/*



*/
#include<iostream>

using namespace std;

struct tunel {
    cabina cab[3];
};

struct vehiculo {
    char tipo;
    string patente;
};

struct horario {
    int minutos;
    int hora;
};

struct arribo {
    vehiculo veh;
    horario hor;
};

struct cabina {
    int id;
    ticket ticket[100];
    int cantTicket;
};

struct ticket {
    int tipoVeh;
    int codTurno;
    float monto;
    float descuento;
    float total;
};

float totalDescuentosAplicados(tunel tunelAEDD);

//----------------------------------------------
int main() {
	
	tunel tunelAEDD;

	
	return 0;
}
//----------------------------------------------

float totalDescuentosAplicados(tunel tunelAEDD) {
    float cantDescTot=0;
    
    for (int i=0; i<tunelAEDD.cab[0].cantTicket; i++) {
        cantDescTot+=tunelAEDD.cab[0].ticket[i].descuento;
    }

    return cantDescTot;
}