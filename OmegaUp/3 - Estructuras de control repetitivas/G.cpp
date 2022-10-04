#include<iostream>

using namespace std;

int main() {

    int N, a=1, b=1;
    cin >> N;
    
    for (int i=1; i<=N; i++) {
        for (int j=N-a; j=0; j--) {
            cout << " ";
        }
        a++;
        for (int k=1; k<=b; k++) {
            cout << "*";
        }
        b+=2;
        cout << endl;
    }

    return 0;
}

