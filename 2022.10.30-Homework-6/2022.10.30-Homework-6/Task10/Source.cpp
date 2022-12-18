#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int c[30000]{ 0 };
	int d[30000]{ 0 };
	int v = 0;
	int w = 0;
	int* a = nullptr;
	int* b = nullptr;

	std::cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		std::cin >> c[i];
	}
	for (int i = 0; i < m; ++i) {
		std::cin >> d[i];
	}
	if (n < m) {
		v = n;
		a = c;
		w = m;
		b = d;
	}
	else {
		v = m;
		a = d;

		w = n;
		b = c;
	}
	for (int i = 0; i < v; i++) {
		if (*(a + i) != -1) {
			for (int j = i + 1; j < v; j++) {
				if (*(a + i) == *(a + j)) {
					*(a + j) = -1;
				}
			}
		}
	}

	for (int i = 0; i < v; i++) {
		if (*(a + i) != -1) {
			bool isc = 0;
			for (int j = 0; j < w; ++j) {
				if (*(a + i) == *(b + j)) {
					isc = 1;
					break;
				}
			}
			if (not isc) {
				*(a + i) = -1;
			}
		}
	}

	int count = 0;

	while (true) {
		int max = -1;
		int max_ind = 0;

		for (int i = 0; i < v; ++i) {
			if (*(a + i) > max) {
				max = *(a + i);
				max_ind = i;
			}
		}
		*(a + max_ind) = -1;
		if (max == -1) {
			break;
		}
		else {
			*(b + count) = max;
			++count;
		}
	}

	std::cout << std::endl;
	for (int i = count - 1; i >= 0;--i) {
		std::cout <<* (b + i) << " ";
	}

	return EXIT_SUCCESS;
}