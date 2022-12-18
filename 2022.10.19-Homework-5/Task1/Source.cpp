#include <iostream>


int main(int argc, char* argv[]) {
    int n, x, k = 0;
    std::cin >> n;
    int a[1001]{};
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    std::cin >> x;
    for (int i = 0; i < n; i++)
        if (a[i] == x) {
            k = k + 1;
        }
    std::cout << k << std::endl;
    return EXIT_SUCCESS;
}