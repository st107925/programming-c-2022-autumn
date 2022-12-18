#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0; int i = 0; int j = 0;
    std::cin >> n;
    int** a = new int* [n];
    for (i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
    for (i = n - 1; i >= 0; i = i - 1) {
        for (j = n - 1; j >= 0; j = j - 1) {
            std::cout << a[j][i] << " ";
        }
        std::cout << std::endl;
    }
    for (i = 0; i < n; i++) {
        delete a[i];
    }
    delete a;
    return EXIT_SUCCESS;
}