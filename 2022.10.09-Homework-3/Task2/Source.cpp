#include<iostream>

int main(int argc, char* argv[]) {
	int a, b = 0;
	std::cin >> a;
	while (a != 0) {
		if ((a < 0) && (a % 2 == -1)) {
			b = b + 1;
		}
		std::cin >> a;
	}
	std::cout << b << std::endl;
	return EXIT_SUCCESS;
}