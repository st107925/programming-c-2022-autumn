#include<iostream>

int main(int argc, char* argv[]) {
    int a[1000] = { 0 };
    int n, i = 0;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (i = n-1; i >= 0; i = i-1) {
        std::cout << a[i] << " ";
    }
    return EXIT_SUCCESS;
}