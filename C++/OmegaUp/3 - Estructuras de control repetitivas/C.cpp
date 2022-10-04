#include<iostream>

using namespace std;

int main() {

    int N, num, mayor;
    cin >> N;

    cin >> num;
    mayor = num;

    for(int i=1; i<N; i++) {
        cin >> num;
        if (num>mayor) {
            mayor = num;
        }
    }

    cout << mayor << endl;
    
    return 0;
}