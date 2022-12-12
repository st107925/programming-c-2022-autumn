#include<iostream>

int main(int argc, char* argv[]) {
	int g[1000] = { 0 };
	int r[1000] = { 0 };
	int i = 1 , j = 0, n = 0, a = 0, b = 0, c = 0, d = 0;
	std::cin >> n >> a >> b >> c >> d;
	for (i = 1; i <= n; i++) {
		g[i] = i;
		r[i] = i;
	}
	for (i = a; i <= b; i++) {
		g[i] = b - i + a;
		r[i] = b - i + a;
 	}
	for (i = c; i <= d; i++) {
		g[i] = r[d - i + c];
	}
	for (i = 1; i <= n; i++) {
		std::cout << g[i] << ' ';
	}
	return EXIT_SUCCESS;
}