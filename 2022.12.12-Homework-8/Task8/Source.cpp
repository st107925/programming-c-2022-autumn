#include <iostream>

void skobkanechet(char* s, char* ans, int i);
int len(char* s, int i);
void skobkachet(char* s, char* ans, int i);

int main(int argc, char* argv[]) {
    char s[1001]{ 0 }; int i = 0;
    char ans[1999]{ 0 };
    std::cin >> s;
    int leng = len(s, 0);
    if (leng % 2 == 0) {
        skobkachet(s, ans, i);
        std::cout << ans;
    }
    else {
        skobkanechet(s, ans, i);
        std::cout << ans;
    }
    return EXIT_SUCCESS;
}


void skobkanechet(char* s, char* ans, int i) {
    if (len(s, 0) == i) {
        ans[2 * i] = ')';
        return;
    }
    else {
        if (i <= len(s, 0) / 2) {
            ans[2 * i] = '(';
            ans[2 * i + 1] = s[i];
        }
        else {
            ans[2 * i + 1] = s[i];
            ans[2 * i] = ')';
        }
        return skobkanechet(s, ans, i + 1);
    }

}
int len(char* s, int i) {
    if (s[i] == 0) {
        return i;
    }
    else {
        return len(s, i + 1);
    }
}
void skobkachet(char* s, char* ans, int i) {
    if (s[i] == 0)
    {
        return;
    }

    if (i < len(s, 0) / 2)
    {
        ans[2 * i] = '(';
        ans[2 * i + 1] = s[i];
    }
    else
    {
        ans[2 * i] = s[i];
        ans[2 * i + 1] = ')';
    }

    skobkachet(s, ans, i + 1);
}