#include <iostream>

int len(char* s, int i);
int pred_func(char* s, int i, int len);
void func(char* s, char* ans, int i, int uni);
int middle = 0; int unique = 0;

int main(int argc, char* argv[])
{
	char s[1001]{ 0 };
	char ans[1001]{ 0 };
	int length = 0; int unique = 0; int middle = 0;
	int rep = 0;
	std::cin >> s;
	length = len(s, 0);
	middle = len(s, 0) / 2;
	rep = pred_func(s, 0, length);
	unique = length - 2 * rep;
	func(s, ans, 0, unique);

	std::cout << ans;

	return EXIT_SUCCESS;
}


int len(char* s, int i) {
	if (s[i] == 0) {
		return i;
	}
	return len(s, i + 1);
}

int pred_func(char* s, int i, int len) {
	if (i == middle) {
		return 0;
	}
	if (s[i] == s[len - 1]) {
		s[i] = 0;
		s[len - 1] = 0;
		return 1 + pred_func(s, i + 1, len - 1);
	}
	else
	{
		return pred_func(s, i + 1, len - 1);
	}
}

void func(char* s, char* ans, int i, int uni) {
	if (uni == 0) {
		return;
	}

	if (s[i] != 0) {
		ans[unique - uni] = s[i];
		func(s, ans, i + 1, uni - 1);
	}
	else {
		func(s, ans, i + 1, uni);
	}
}