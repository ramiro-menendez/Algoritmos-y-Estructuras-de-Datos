#include<iostream>
using namespace std;

bool division(int, int, float&);

int main() {
	
	int a, b;
	float result;
	
	cin >> a >> b;
	
    cout << "La división entre " << a << " y " << b;
    if (division(a, b, result)) {
        cout << " es factible y tiene como resultado: " << result << endl;
    }
	else {
        cout << " no es factible." << endl;
    }
	
	return 0;
}

bool division (int a, int b, float& result) {
	if (b==0) return false;
	result = (float)a/b;
	return true;
}
