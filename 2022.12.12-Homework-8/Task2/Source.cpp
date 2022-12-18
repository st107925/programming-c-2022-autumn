#include<iostream>
int phi(int n);
int main(int argc, char* argv[]) {
	std::cout << phi(5);
	return EXIT_SUCCESS;
}
int phi(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return phi(n - 1) + phi(n - 2);
	}
}