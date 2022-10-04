/*Desde un punto de vista simplificado, el calendario gregoriano puede definirse como un conjunto de 365 días
divididos en 12 meses. Cada mes, tiene un nombre, un número y un conjunto de semanas. Cada semana,
contiene como máximo 7 días. Cada día, tiene un número (fecha) y un nombre (día de la semana).*/

#include<iostream>

using namespace std;

struct dia {
    int numero;
    char nombre[10];
};
struct semana {
    dia d;
    int numero;
};
struct mes {
    semana s;
    int numero;
    char nombre[10];
};
struct anio {
    int numero;
    mes m;
};

struct calendario{
    anio a;
};

void cargarOctubre(calendario year2022);

//----------------------------------------------
int main() {
	
	calendario year2022;

    cargarOctubre(year2022);
	
	return 0;
}
//----------------------------------------------

void cargarOctubre(calendario year2022) {
    year2022.a.m.numero=10;
    year2022.a.numero=2022;
    year2022.a.m.s.numero=2;
    year2022.a.m.s.d.numero=12;
}