#include <iostream>
using namespace std;
int main(void)
{
	int val1, val2, val3;
	cin >> val1 >> val2;
	for (int i = 1; i <= val1; i++)
	{
		cin >> val3;
		if (val3 < val2)
			cout << val3 << " ";
	}
	return 0;
}