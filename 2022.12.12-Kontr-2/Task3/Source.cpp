#include<iostream>

int prime(int n, int k);

int main(int argc, char* argv[]) {
	int n = 0; int k = 0;
	std::cin>>n;
	k = 2;
	if (prime(n, k) == 0) {
		std::cout<<"composite"<<std::endl;
	}
	else {
		std::cout<<"prime"<<std::endl;
	}
	return EXIT_SUCCESS;
}

int prime(int n, int k) {
	if (k * k > n) {
		return 1;
	}
	else {
		if (n % k == 0) {
			return 0;
		}
		else {
			return prime(n, k + 1);
		}
	}
}