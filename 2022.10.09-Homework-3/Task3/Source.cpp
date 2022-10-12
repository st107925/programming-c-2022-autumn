#include<iostream>

int main(int argc, char* argv[]) {
	int a, b, c, ks = 0;
	std::cin >> a;
	c = 1;
	b = 0;
	ks = 0;
	do {
		b += c;
		while (ks < a) {
			
			std::cout << b << " ";
			b ++;
			ks ++;
		}
		std::cout << "\n";
		c ++;
		b = 0;
		ks = 0;
	} while (c <= a);
	return EXIT_SUCCESS;
}