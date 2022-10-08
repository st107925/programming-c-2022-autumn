#include<iostream>

int main(int argc, char* argv[]) {
	int xf, yf, xd, yd, k = 0;
	std::cin >> xf >> yf >> xd >> yd;
	if ((xf == xd) || (yf == yd) || (yd == xd + yf - xf) || (yd == -xd + yf + xf)) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}