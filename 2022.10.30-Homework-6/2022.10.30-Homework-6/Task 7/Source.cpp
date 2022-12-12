#include<iostream>

int main(int argc, char* argv[]) {
    int a[100] = { 0 };
    int n = 0, k = 0, x = 0, i = 0, j = 0, g = 0, m = 0, res = 1;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] >= 0) {
            k += a[i];
        }
        if (a[i] >= x) {
            x = a[i];
            j = i;
        }
        if (a[i] <= g) {
            g = a[i];
            m = i;
        }

    }
    if (j >= m) {
        for (i = m + 1;i < j; i++) {
            res = res * a[i];
        }
    }
    else {
        for (i = j + 1;i < m; i++) {
            res = res * a[i];
        }
    }
    if ((j == m - 1)  (m == j - 1)) {
        res = 0;
    }
    std::cout << k << ' ' << res;
    return EXIT_SUCCESS;
}