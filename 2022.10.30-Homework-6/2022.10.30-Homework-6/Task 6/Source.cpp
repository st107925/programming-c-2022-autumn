#include<iostream>

int main(int argc, char* argv[]) {
    int a[100] = { 0 };
    int n = 0, k = 0, x = 0, i = 0;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        if ((a[i]) % 2 == 1) {
            std::cout << a[i] << ' ';
            k++;
        }
    }
    std::cout << std::endl;
    for (i = 0; i < n; i++) {
        if((a[i]) % 2 == 0) {
            std::cout << a[i] << ' ';
            x++;
        }
    }
    std::cout << std::endl;
    if (x >= k) {
        std::cout  << "YES";
    }
    else {
        std::cout << "NO";
    }
    return EXIT_SUCCESS;
}