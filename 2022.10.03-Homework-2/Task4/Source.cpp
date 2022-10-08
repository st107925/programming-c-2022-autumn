#include<iostream>

int main(int argc, char* argv[]) {
	int a, b, c, d = 0;
	std::cin >> a >> b >> c >> d;
	if (a == 0 && b == 0) {
		std::cout << "INF" << std::endl;
	}
	else {
		if (-b * c / a + d == 0) {
			std::cout << "NO" << std::endl;
		}
		else {
			if (b % a != 0) {
				std::cout << "NO" << std::endl;
			}
			else {
				std::cout << -b / a << std::endl;
			}
		}
	}
	return EXIT_SUCCESS;
}