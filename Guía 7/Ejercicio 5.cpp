#include <iostream>

using namespace std;

bool esMagico (int cuadrado[3][3]);

//----------------------------------------------
int main() {

	int cuadrado[3][3] =   {{2,7,6},
                            {9,5,1},
                            {4,3,8}};

    if (esMagico(cuadrado)) {
        cout << "true";
    }
    else cout << "false";


	return 0;
}
//----------------------------------------------

bool esMagico (int cuadrado[3][3]) {
    bool bandera = true;
    int sum[8]={0};

    for (int i=0; i<3; i++) {
        sum[0]+=cuadrado[0][i];
        sum[1]+=cuadrado[1][i];
        sum[2]+=cuadrado[2][i];
        sum[3]+=cuadrado[i][0];
        sum[4]+=cuadrado[i][1];
        sum[5]+=cuadrado[i][2];
        sum[6]+=cuadrado[i][i];
        sum[7]+=cuadrado[i][2-i];
    }
    int i=0;
    while (bandera && i<7) {
        if (sum[i]!=sum[i+1]) {
            bandera=false;
        }
        i++;
    }
    
    return bandera;


}