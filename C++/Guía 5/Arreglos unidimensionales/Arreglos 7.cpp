#include<iostream>
#define N 5

using namespace std;

bool todos_iguales(int vector[]);

//------------------------------
int main() {
	
	int vector[N] = {1,2,1,1,1};
	bool iguales=todos_iguales(vector);

	if(iguales) cout << "Todos los elementos del vector son iguales" << endl;
	else cout << "Los elementos del vector no son iguales" << endl;
	
	return 0;
}
//--------------------------------

bool todos_iguales(int vector[]) {
	bool result=true;
	for (int i=0; i<N-1; i++) {
		if (vector[i]!=vector[i+1]) result=false;
	}
	return result;
}