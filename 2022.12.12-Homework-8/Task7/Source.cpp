#include <iostream>

void zvezda(char* s, char* ans, int i);


int main(int argc, char* argv[]) {
    char s[1001]{ 0 };
    char ans[1999]{ 0 };
    std::cin >> s;
    zvezda(s, ans, 0);
    std::cout << ans;
    return EXIT_SUCCESS;
}


void zvezda(char* s, char* ans, int i) {
    ans[2 * i] = s[i];
    if (s[i + 1] == 0) {
        return;
    }
    ans[2 * i + 1] = '*';
    zvezda(s, ans, i + 1);
}