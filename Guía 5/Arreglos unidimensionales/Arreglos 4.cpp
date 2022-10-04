#include<iostream>
#define N 10

using namespace std;

int main(){

    float X[N] = {1,2,3,4,5,6,7,8,9,10};
    float min=X[0], max=X[1];

    //Determinar mínimo y máximo en X
    for (int i=0; i<N; i++) {
        if (X[i]<min) min=X[i];
        if (X[i>max]) max=X[i];
    }

    //Normalizar vector e imprimir en consola
    for (int i=0; i<N; i++) {
        X[i] = ((X[i]-min)/(max-min))*100;
        cout << X[i] << endl;
    }

    return 0;
}