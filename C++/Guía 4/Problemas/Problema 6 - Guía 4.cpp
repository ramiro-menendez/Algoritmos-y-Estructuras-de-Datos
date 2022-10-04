#include<iostream>

using namespace std;

int cifrado(int);
int descifrado(int);

int main() {

    int num;
    
    cout << "Ingrese el número de 4 dígitos a cifrar: ";
    cin >> num;

    cout << "El número " << num << " cifrado es " << cifrado(num)
        << " y el descifrado es " << descifrado(cifrado(num)) << endl;

    return(0);
}

int cifrado(int num) {

    int cifrado;

    /* Cada línea aísla un dígito y luego le suma 7 (para descartar posibles decenas se hace %10).
    Se hizo de esta manera para evitar guardar un espacio de memoria por cada dígito */

    cifrado=(((((num/10)%10)+7)%10)*1000)+//Dígito 3 en posición 1.
    ((((num%10)+7)%10)*100) +             //Dígito 4 en posición 2.
    ((((num/1000)+7)%10)*10) +            //Dígito 1 en posición 3.
    ((((num/100)%10)+7)%10);              //Dígito 2 en posición 4.

    return(cifrado);
}

int descifrado(int num) {

    int descifrado;

    /* El descifrado es igual al cifrado pero +3 en lugar de +7 (para volver al número anterior) */

    descifrado=(((((num/10)%10)+3)%10)*1000)+
    ((((num%10)+3)%10)*100)+
    ((((num/1000)+3)%10)*10)+
    ((((num/100)%10)+3)%10);

    return(descifrado);
}