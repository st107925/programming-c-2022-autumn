#include<iostream>

int reverse(int* s, int l, int r);
int reversal(int* s, int n);

int main(int argc, char* argv[]) {
	int n = 0; int i = 0; int k = 0;int l = 0; int r = n - 1;
	std::cin>>n;
	int* s = new int[n];
	for (i = 0; i < n; i++) {
		std::cin>>s[i];
	}
	reversal(s, n);
	for (i = 0; i < n; i++) {
		std::cout<<s[i]<<" ";
	}
	delete s;
	return EXIT_SUCCESS;
}
int reverse(int* s, int l, int r) {
	int x = s[l];
	s[l] = s[r];
	s[r] = x;
	if (l + 1 >= r - 1) {
		return 0;
	}
	reverse(s, l + 1, r - 1);
	return 0;
}
int reversal(int* s, int n) {
	if (n == 1) {
		return 0;
	}
	reverse(s, 0, n - 1);
	return 0;
}