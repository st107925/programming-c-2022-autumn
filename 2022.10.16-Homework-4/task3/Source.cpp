#include<iostream>

int main(int argc, char* argv[]) {
	int a, i, j, k = 0;
	std::cin >> a;
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++) {
			if (k < a) {
				std::cout << i << " ";
				k++;
			}
			
		}
	}
	return EXIT_SUCCESS;
}