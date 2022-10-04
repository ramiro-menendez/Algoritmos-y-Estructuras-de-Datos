#include<iostream>

using namespace std;

int sumDig(int);

int main() {

    int num;
    cin >> num;

    cout << sumDig(num) << endl;
    
    return 0;
}

int sumDig(int num) {
    if (num<10) return num;
    return num%10 + sumDig(num/10);
}