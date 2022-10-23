#include<iostream>
#include <math.h>

int main(int argc, char* argv[]) {
	int a, i, k = 0;
	std::cin >> a;
	for (i = 1; i <= int(sqrt(a) + 1); i++) {
		if (a % i == 0) {
			k++;
			if (a != i * i) {
				k++;
			}
		}
	}
	std::cout << k << std::endl;
	return EXIT_SUCCESS;
}