#include<iostream>

double mayorDeTres(double, double, double);

int main() {

    double num1, num2, num3;
    
    std::cout << "Ingrese tres números: ";
    std::cin >> num1 >> num2 >> num3;

    std::cout << "\nEl mayor de los tres es " << mayorDeTres(num1, num2, num3) << std::endl;

    return(0);
}

double mayorDeTres(double num1, double num2, double num3) {

    double mayor;

    if (num1>num2 && num1>num3) {
        mayor=num1;
    }
    else if (num2>num1 && num2>num3) {
        mayor=num2;
    }
    else {
        mayor=num3;
    }

    return(mayor);
}