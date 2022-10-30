#include<iostream>

int main(int argc, char* argv[]) {
	int i, n, k = 0;
	int max = 0;
	int a[1001]{};
	std::cin >> n;
	for (i = 0;i < n;i++)
		std::cin >> a[i];
	if (a[0] + a[1] + a[n - 1] > a[n - 1] + a[n - 2] + a[0]) {
		max = a[0] + a[1] + a[n - 1];
	}
	else {
		max = a[n - 1] + a[n - 2] + a[0];
	}
	for (i = 1;i <= (n - 1);i++)
		if ((a[i] + a[i - 1] + a[i + 1]) >= max) {
			max = a[i] + a[i - 1] + a[i + 1];
		}
	if (n == 2) {
		max = a[0] + a[1];
	}
	if (n == 1) {
		max = a[0];
	}
	std::cout << max << std::endl;
	return EXIT_SUCCESS;
}