#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0;int i = 0; int j = 0;int m = 0;
    std::cin >> n >> m;
    int** a = new int* [n];
    int** b = new int* [n];
    for (i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    for (i = 0; i < n; i++) {
        b[i] = new int[m];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cin >> b[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cout << a[i][j] + b[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (i = 0; i < n; i++) {
        delete a[i];
        delete b[i];
    }
    delete a;
    delete b;
    return EXIT_SUCCESS;
}