#include<iostream>

int maxDigito(int);

//----------------------------------

int main() {
	
	int num;
	std::cin >> num;
	
	std::cout << maxDigito(num) << std::endl;
	
	return 0;
}

//----------------------------------
/*
int maxDigito(long num) {
	int a, b;
	if (num==0) return 0;
	a = num%10;
	b = maxDigito(num/10);
	if (a>b) return a;
	return b; 
}*/
int maxDigito(int num) {
	if (n<10) return n;
	if ((n%10)>maxDigito(n/10)) return (n%10);
	return maxDigito(n/10);
}