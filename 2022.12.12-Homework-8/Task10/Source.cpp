#include <iostream>

int search(int(*a)[2], int n, int k, int i, bool is_first);


int main(int argc, char* argv[])
{
    int n = 0; int i = 0; int j = 0;
    int k = 0;
    int a[1000][2]{ 0 };
    std::cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2; j++) {
            std::cin >> a[i][j];
        }
    }
    std::cin >> k;
    std::cout << search(a, n, k, 0, 1) + 1;

    return EXIT_SUCCESS;
}

int search(int(*a)[2], int n, int k, int i, bool is_first)
{
    if (i == n) {
        return 0;
    }
    if (is_first) {
        if (a[i][1] == k) {
            return 1 + search(a, n, k, 0, 0);
        }
        else {
            return search(a, n, k, i + 1, 1);
        }
    }
    else {
        if (a[i][0] == k) {
            return 1 + search(a, n, a[i][1], 0, 0);
        }
        else {
            return search(a, n, k, i + 1, 0);
        }
    }
}