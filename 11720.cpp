#include <iostream>
using namespace std;
int main(void)
{
	int i;
	int val1;
	char val2[100];
	cin >> val1;
	
	int sum = 0;
	for (i = 0; i < val1; i++)
	{
		cin >> val2[i];
		sum += val2[i] - '0';
	}
	cout << sum << "\n";
		return 0;
}

