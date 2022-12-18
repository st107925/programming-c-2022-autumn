#include<iostream>

int main(int argc, char* argv[]) {
    int m = 0;int n = 0; int i = 0; int j = 0;
    std::cin >> n >> m;
    int** a = new int* [n];
    for (i = 0;i < n;i++) {
        a[i] = new int[m];
    }
    for (i = 0; i < n; i++) {
        for (j = 0;j < m;j++) {
            std::cin >> a[i][j];
        }
    }
    for (i = 0;i < n;i++) {
        for (j = m - 1;j >= 0;j = j - 1) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (i = 0; i < n;i++) {
        delete a[i];
    }
    delete a;
    return EXIT_SUCCESS;
}