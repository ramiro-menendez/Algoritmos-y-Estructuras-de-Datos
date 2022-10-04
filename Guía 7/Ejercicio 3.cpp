#include <iostream>

using namespace std;

bool es_triangular_superior(int [3][3]);

//----------------------------------------------
int main() {

    int A[3][3] = {{1, 0, 40},
                    {0, 6, 0},
                    {0, 0, 1}};
    bool esTriSup;

    esTriSup=es_triangular_superior(A);

    if (esTriSup) cout << "La Matriz A es triangular superior." << endl;
    else cout << "La Matriz A no es triangular superior." << endl;

	return 0;
}
//----------------------------------------------

bool es_triangular_superior(int A[3][3]) {
    bool result=true;
    int i=1, j;

    while (i<3 && result) {
        j=0;
        while (j<i && result) {
            if (A[i][j]!=0) {
                result=false;
            }

            j++;
        }

        i++;
    }

    return result;
}