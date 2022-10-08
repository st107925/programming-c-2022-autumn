#include<iostream>

int main(int argc, char* argv[]) {
	int n, k = 0;
	std::cin >> k;
	if ((k % 4 == 0) || (k == 1)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}