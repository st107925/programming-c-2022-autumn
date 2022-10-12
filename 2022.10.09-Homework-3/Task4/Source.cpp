#include<iostream>

int main(int argc, char* argv[]) {
	int a, b, c, ks, l = 0;
	std::cin >> a;
	c = 1;
	b = 0;
	ks = 0;
	l = 0;
	do {
		b += c;
		l = b;
		while (ks < a) {
			if (b < a) {
				std::cout << b << " ";
				ks ++;
				b ++;
				l = b;
			}
			else {
				
				std::cout << l << " ";
				ks ++;
				b ++;
				l = l - 1;
			}
			
		}
		std::cout << "\n";
		c ++;
		b = 0;
		ks = 0;
		l = 0;
	} while (c <= a);
	return EXIT_SUCCESS;
}