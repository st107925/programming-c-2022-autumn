#include<iostream>

int min(int a, int b, int c, int d) {
	if (a <= b && a <= c && a <= d) {
		return a;
	}
	else {
		return min(b, c, d, a);
	}
}
int main(int argc, char* argv[]) {
	std::cout << min(23, 6, 234, 54);
	return EXIT_SUCCESS;
}