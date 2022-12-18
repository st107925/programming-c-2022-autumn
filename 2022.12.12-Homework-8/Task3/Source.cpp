#include<iostream>

int binom(int n, int k);

int main(int argc, char* argv[]) {
	Int n = 0; int k = 0;
	Std::cin >> n >> k;
	std::cout << binom(n, k);
	return EXIT_SUCCESS;
}

int binom(int n, int k) {
	if (k == n) {
		return 1;
	}
	else {
		if (k == 1) {
			return n;
		}
		else {
			return binom(n - 1, k - 1) + binom(n - 1, k);
		}
	}
}