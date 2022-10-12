#include<iostream>

int main(int argc, char* argv[]) {
	int a, b = 0;
	std::cin >> a >> b;
	while (a <= b) {
		std::cout << a << std::endl;
		a++;
	}
	return EXIT_SUCCESS;
}