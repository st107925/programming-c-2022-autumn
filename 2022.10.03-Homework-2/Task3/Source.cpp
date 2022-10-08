#include<iostream>

int main(int arg, char* argv[]) {
	int k, m, n, t = 0;
	std::cin >> k >> m >> n;
	t = n / k * 2 * m;
	if (n <= k) {
		t = 2 * m;
	}
	else {
		if (n * 2 % k == 0) {
			t = m * (n * 2 / k);
		}
		else {
			t = m * (1 + (n * 2 / k));
		}
	}
	std::cout << t << std::endl;
	return EXIT_SUCCESS;
}