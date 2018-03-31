#include <iostream>

using namespace std;

int main(void)
{
	int val0;
	int val1;
	int val2[5];
	int sum = 0;
	int i, j;
	double count = 0;
	
	// int val2, val3;

		
	
		
		cin >> val0;
		for (j = 0; j < val0; j++)
		{
			cin >> val1;
	
			for (i = 0; i < val1; i++)
			{
				cin >> val2[i];
				sum += val2[i];
			}
			int average;
			average = sum / val1;
			double average2;
			for (i = 0; i < val1; i++)
			{
				if (val2[i] > average)
					count++;
			}
			
			average2 = (count / val1) * 100;
			
			cout << fixed;
			cout.precision(3);
			cout << average2 << "%" << "\n";
			
			
		}
		
	
	
	
	
	
	

	return 0;
}