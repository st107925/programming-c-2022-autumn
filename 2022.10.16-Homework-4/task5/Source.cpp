#include <iostream>

int main(int argc, char* argv[]) {
	int a, i, j = 0;
	float k, ed = 1;
	k = 1;
	ed = 1;
	std::cin >> a;
	if (a > 7) {
		std::cout << 2.71828 << std::endl;
	}
	else {
		for (i = 1; i <= a; i++) {
			for (j = 1; j <= i; j++) {
				ed = ed * j;
			}
			k = k + 1 / ed;
			ed = 1;
		}
		std::cout << k << std::endl;
	}
	return EXIT_SUCCESS;
}
