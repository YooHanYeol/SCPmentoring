#include <iostream>

using namespace std;

int main(void)
{
	int val1, val2, val3;

	cin >> val1 >> val2 >> val3;

	if (val1 >= val2 && val2 >= val3) {
		cout << val2;
	}
	else if (val1 >= val3 && val3 >= val2) {
		cout << val3;
	}

	else if (val2 >= val1 && val1 >= val3) {
		cout << val1;
	}

	else if (val2 >= val3 && val3 >= val1) {
		cout << val3;
	}

	else if (val3 >= val2 && val2 >= val1) {
		cout << val2;
	}

	else if (val3 >= val1 && val1 >= val2){
		cout << val1;
	}
	
	return 0;
}