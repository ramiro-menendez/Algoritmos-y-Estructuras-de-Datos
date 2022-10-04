#include<iostream>
#define N 5

using namespace std;

bool todos_distintos(int vector[]);

//------------------------------
int main() {
	
	int vector[N] = {1,2,1,1,1};
	bool iguales=todos_distintos(vector);

	if(iguales) cout << "El vector tiene elementos distintos" << endl;
	else cout << "El vector es homogeneo" << endl;
	
	return 0;
}
//--------------------------------

bool todos_distintos(int vector[]) {
	bool result=false;
	for (int i=0; i<N-1; i++) {
		if (vector[i]!=vector[i+1]) result=true;
	}
	return result;
}