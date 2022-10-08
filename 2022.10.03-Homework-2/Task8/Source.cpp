#include<iostream>

int main(int argc, char* argv[]) {
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	if ((a < b + c) && (b < a + c) && (c < b + a)) {
		if ((c * c > a * a + b * b) || (a * a > b * b + c * c) || (b * b > a * a + c * c)) {
			std::cout << "obtuse" << std::endl;
		}
		if ((c * c == a * a + b * b) || (a * a == b * b + c * c) || (b * b == a * a + c * c)) {
			std::cout << "right" << std::endl;
		}
		if ((c * c < a * a + b * b) && (a * a < b * b + c * c) && (b * b < a * a + c * c)) {
			std::cout << "acute" << std::endl;
		}
	}
	else {
		std::cout << "impossible" << std::endl;
	}
	return EXIT_SUCCESS;
}