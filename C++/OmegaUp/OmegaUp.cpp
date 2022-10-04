#include<iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    while (N<100) {
        if (N%2==0) {
            N+=3;
        }
        else {
            N*=2;
        }
    }

    return(0);
}