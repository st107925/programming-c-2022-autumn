#include<iostream>

int main(int argc, char* argv[]) {
	int x = 0;
	int a = 0;
	int b = 0;
	std::cin >> x;
	int a = x * x;
	int b = a * a;
	std::cout << 1 + x + a + b / x + b << std::endl;
	return EXIT_SUCCESS;
}