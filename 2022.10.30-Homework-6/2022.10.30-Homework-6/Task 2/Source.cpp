#include<iostream>

int main(int argc, char* argv[]) {
	int a[1000] = { 0 };
	int b[1000] = { 0 };
	int i, n, m, k ,j, x = 0;
	std::cin >> n;
	for (i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> m;
	for (i = 0; i < m; i++) {
		std::cin >> k >> x;
		for (j = k - 1; j < x; j++) {
			std::cout << a[j] << ' ';
		}
	}
	return EXIT_SUCCESS;
}