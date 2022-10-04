#include<iostream>

int producto(int, int);

//----------------------------------

int main() {
	
	int num1, num2;
	std::cin >> num1 >> num2;
	
	std::cout << producto(num1, num2) << std::endl;
	
	return 0;
}

//----------------------------------

int producto(int a, int b) {
	if (b==0) return 0;
	return a + producto(a, b-1);
}
