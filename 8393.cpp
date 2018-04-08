#include <iostream>

using namespace std;

int main(void)
{
	int val1 = 0;
	int i= 0;
	int sum = 0;

	while (i <= val1)
	{


		cin >> val1;

		for (i = 1; i <= val1; i++)
		{
			sum += i;
		}

		cout << sum << "\n";

		if (val1 == 0)
			break;
		

	}


	return 0;
}