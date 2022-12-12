#include<iostream>

int main(int argc, char* argv[]) {
	int a[1000] = { 0 };
	int n, i, x, k = 0;
	std::cin >> n;
	for (i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::cin >> x;
	for (i = 0; i < n; i++) {
		if (x > (a[i])) {
			break;
		}
	}
	std::cout << i+1 << std::endl;
	return EXIT_SUCCESS;
}