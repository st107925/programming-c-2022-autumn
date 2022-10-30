#include<iostream>

int main(int argc, char** argv){
	int n, mx = 0;
	int k = 0;
	int mn = 10000;
	std::cin >> n;
	int a[10000]{};
	for (int i = 0; i < n; i++) 
		std::cin >> a[i];
	for (int i = 0; i < n; i++)
		if (a[i] >= mx) {
			mx = a[i];
		}
		if (a[i] < mn) {
			mn = a[i];
		}
	for (int i = 0; i < n; i++)
		if (a[i] == mx) {
			a[i] = mn;
		}
	for (int i = 0; i < n; i++)
		std::cout << a[i] << " ";
	return EXIT_SUCCESS;
}