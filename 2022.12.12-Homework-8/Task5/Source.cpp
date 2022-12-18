#include<iostream>

int fun(int n);

int main(int argc, char* argv[]) {
    int a = 0;
    std::cin >> a;
    if (fun(a - 1) == 0) {
        std::cout << "NO";
    }
    else {
        std::cout << "YES";
    }

    return EXIT_SUCCESS;
}

int fun(int n) {
    if (n < 0) {
        return 0;
    }
    else {
        if ((n == 3) || (n == 5)) {
            return 1;
        }
        else {
            return (fun(n - 3) || fun(n - 5));
        }
    }
}