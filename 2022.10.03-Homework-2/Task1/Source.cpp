#include<iostream>

int main(int argc, char* argv[]) {
	int n;
	n = 0;
	std::string s = "";
	std::cin >> n;
	switch (n / 100) {
	case 1:
		s = "sto ";
		break;
	case 2:
		s = "dvesti ";
		break;
	case 3:
		s = "trista ";
		break;
	case 4:
		s = "chetyresta ";
		break;
	case 5:
		s = "pyat'sot ";
		break;
	case 6:
		s = "shest'sot ";
		break;
	case 7:
		s = "sem'sot ";
		break;
	case 8:
		s = "vosem'sot ";
		break;
	case 9:
		s = "devyat'sot ";
		break;
	}
	switch ((n % 100) / 10) {
	case 2:
		s += "dvadcat' ";
		break;
	case 3:
		s += "tridcat' ";
		break;
	case 4:
		s += "sorok ";
		break;
	case 5:
		s += "pyat'desyat ";
		break;
	case 6:
		s += "shest'desyat ";
		break;
	case 7:
		s += "sem'desyat ";
		break;
	case 8:
		s += "vosem'desyat ";
		break;
	case 9:
		s += "devyanosto ";
		break;
	}
	if ((n % 100 >= 10) & (n % 100 < 20)) {
		switch (n % 100)
		{
		case 10:
			s += "desyat'";
			break;
		case 11:
			s += "odinnadcat'";
			break;
		case 12:
			s += "dvenadcat'";
			break;
		case 13:
			s += "trinadcat'";
			break;
		case 14:
			s += "chetyrnadcat'";
			break;
		case 15:
			s += "pyatnadcat'";
			break;
		case 16:
			s += "shextnadcat'";
			break;
		case 17:
			s += "semnadcat'";
			break;
		case 18:
			s += "vosem'nadcat'";
			break;
		case 19:
			s += "devyatnadcat'";
			break;
		}
	}
	else {
		switch (n % 10)
		{
		case 1:
			s += "odin banan";
			break;
		case 2:
			s += "dva banana";
			break;
		case 3:
			s += "tri banana";
			break;
		case 4:
			s += "chetyre banana";
			break;
		case 5:
			s += "pyat' bananov";
			break;
		case 6:
			s += "shest' bananov";
			break;
		case 7:
			s += "sem' bananov";
			break;
		case 8:
			s += "vosem' bananov";
			break;
		case 9:
			s += "devyat' bananov";
			break;
		}
	}
	std::cout << s << std::endl;
	return EXIT_SUCCESS;
}