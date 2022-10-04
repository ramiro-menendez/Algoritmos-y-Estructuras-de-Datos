#include <iostream>

using namespace std;

bool es_triangular(int [3][3]);

//----------------------------------------------
int main() {

    int A[3][3] = {{1, 0, 40},
                    {0, 6, 0},
                    {0, 0, 1}};
    bool esTri;

    esTri=es_triangular(A);

    if (esTri) cout << "La Matriz A es triangular ." << endl;
    else cout << "La Matriz A no es triangular ." << endl;

	return 0;
}
//----------------------------------------------

bool es_triangular(int A[3][3]) {
    bool result=true;
    int i=0, j;

    while (i<3 && result) {
        j=0;
        while (j<3 && result) {
            if (i!=j) {
				if (A[i][j]!=0) {
					result=false;
				}
			}

            j++;
        }

        i++;
    }

    return result;
}