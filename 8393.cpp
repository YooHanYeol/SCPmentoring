#include <iostream>

using namespace std;

int main(void)
{
	int val1;
	int i, j = 0;


	cin >> val1;

	for (i = 1; i <= val1; i++)
	{
		j += i;
	}

	cout << j << "\n";

	return 0;
}