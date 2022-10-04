#include<iostream>

using namespace std;

string linea(int, char);

int main() {
    int num;
    char caracter;

    cout << "Ingresá la cantidad de caracteres que quieras repetir: ";
    cin >> num;

    while (num<1) {
        cout << "El número tiene que ser mayor a cero. Reingresá el número: ";
        cin >> num;
    }

    cout << "Perfecto, ahora ingresá un caracter: ";
    cin >> caracter;

    cout << linea(num, caracter);
    
    return(0);
}

string linea(int num, char caracter) {
    string cadena;

    for (int i=1; i<=num; i++) {
        cadena+=caracter;
    }

    return(cadena);
}
    