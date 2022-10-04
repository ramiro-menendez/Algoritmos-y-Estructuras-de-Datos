//Suma de los primeros N enteros.

#include<iostream>

int sumaPrimerosN(int);
int sumaPares(int);

//-------------------------------------------------

int main() {

    int N;
    std::cin >> N;

    std::cout << sumaPrimerosN(N) << std::endl;
    std::cout << sumaPares(N) << std::endl;

    return 0;
}

//-------------------------------------------------

int sumaPrimerosN(int N) {
    if (N==1) return 1;
    return N + sumaPrimerosN(N-1); 
}

//Suma de pares desde N hasta 2.

int sumaPares(int N) {
    if (N<2) return 0;
    if (N==2) return 2;
    if (N%2==0) return N + sumaPares(N-2);
    return sumaPares(N-1);
}