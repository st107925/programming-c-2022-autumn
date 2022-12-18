#include<iostream>

void hanoitower(int n, int f, int t);
int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;
    hanoitower(n, 1, 2);
    return EXIT_SUCCESS;
}

void hanoitower(int n, int f, int t) {
    if (n <= 0) {
        return;
    }
    int tmp = 6 - f - t;
    hanoitower(n - 1, f, tmp);
    std::cout << "Disk " << n << " move from " << f << " to " << t << std::endl;
    hanoitower(n - 1, tmp, t);
}