#include<iostream>

char max(char* n, int i, int m);

int main(int argc, char* argv[]) {
    char s[1001]{ 0 };
    std::cin >> s;
    std::cout << max(s, 0, 0);
    return EXIT_SUCCESS;
}

char max(char* n, int i, int m) {
    if (n[i] == 0) {
        return m;
    }
    else {
        if (int(n[i]) < int(n[i + 1])) {
            m = int(n[i + 1]);
            return max(n, i + 1, m);
        }
        return max(n, i + 1, m);
    }
}