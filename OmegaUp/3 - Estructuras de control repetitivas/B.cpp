#include<iostream>

using namespace std;

int main() {

    int num, suma=0;

    do
    {
        cin >> num;
        suma+=num;
    } while (num!=0);
    
    cout << suma << endl;
    
    return 0;
}