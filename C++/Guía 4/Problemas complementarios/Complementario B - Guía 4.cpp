#include<iostream>

using namespace std;

string diasMes(int);

int main() {

    int mes;

    cout << "Ingrese un mes (número del 1 al 12): ";
    cin >> mes;

    cout << diasMes(mes);

    return(0);
}

string diasMes(int mes) {

    string result;

    switch(mes) {
        case 1: result="ENERO tiene 31 días.";
        break;
        case 2: result="FEBRERO tiene 28 días.";
        break;
        case 3: result="MARZO tiene 31 días.";
        break;
        case 4: result="ABRIL tiene 30 días.";
        break;
        case 5: result="MAYO tiene 31 días.";
        break;
        case 6: result="JUNIO tiene 30 días.";
        break;
        case 7: result="JULIO tiene 31 días.";
        break;
        case 8: result="AGOSTO tiene 30 días.";
        break;
        case 9: result="SEPTIEMBRE tiene 31 días.";
        break;
        case 10: result="OCTUBRE tiene 31 días.";
        break;
        case 11: result="NOVIEMBRE tiene 30 días.";
        break;
        case 12: result="DICIEMBRE tiene 31 días.";
        break;
        default : result="0";
    }

    return(result);
}