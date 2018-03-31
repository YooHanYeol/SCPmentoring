#include <iostream>

using namespace std;

int main(void)
{
	int val1;

	cin >> val1;

	switch (val1 / 10) {
	case 10:
		cout << "A" << "\n";
		break;
	case 9:
		cout << "A" << "\n";
		break;
	case 8:
		cout << "B" << "\n";
		break;
	case 7:
		cout << "C" << "\n";
		break;
	case 6:
		cout << "D" << "\n";
		break;
	case 5:
		cout << "F" << "\n";
		break;
	case 4:
		cout << "F" << "\n";
		break;
	case 3:
		cout << "F" << "\n";
		break;
	case 2:
		cout << "F" << "\n";
		break;
	case 1:
		cout << "F" << "\n";
		break;
	case 0:
		cout << "F" << "\n";
		break;
	}
	return 0;
}