//Reemplazar a++ y a--;

#include <iostream>
using namespace std;

void masmas(int&);
void menosmenos(int&);

//----------------------------------------

int main(int argc, char *argv[]) {
	
	int num;
	cin >> num;

	masmas(num);
	cout << num << endl;

	menosmenos(num);
	menosmenos(num);
	cout << num << endl;

	return 0;
}

//-----------------------------------------

void masmas(int& num) {
	num++;
}
void menosmenos(int& num) {
	num--;
}

