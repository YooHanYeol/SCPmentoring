#include <iostream>

using namespace std;


int main(void)
{
	int val0;
	int val1[1000];
	int val2[1000];
	int sum = 0;
	int i, j;
	double count;
	int average;
	double average2;   // ������ �ݺ��� �ȿ� �ִ°� �ƴ϶� ó������ ����
	// int val2, val3;

		cin >> val0; // �׽�Ʈ���̽� �� �Է�
		for (j = 0; j < val0; j++) // val0����ŭ j �� ����
		{
			cin >> val1[j]; // �迭 val1�� �Է�
			sum = 0;	// ���� �ʱ�ȭ
			count = 0;	// ��պ��� ���� �� ���� �ʱ�ȭ
	
			for (i = 0; i < val1[j]; i++) //  val1����ŭ i �� ����
			{
				cin >> val2[i]; // �迭 val2�� �Է�
				sum += val2[i]; // val2���� ���� (����)
			}
			
			average = sum / val1[j]; // ������ �迭 ������ ���� (���)
			
			for (i = 0; i < val1[j]; i++) // val1����ŭ i �� ����
			{
				if (val2[i] > average) // ��պ��� val2�迭 ���� Ŭ��
					count++;		   // ��պ��� ���� �� ���� ����
			}
			average2 = (count / val1[j]) * 100; // val1���� ī��Ʈ�� ������ 100�� ����
			
			cout << fixed;
			cout.precision(3);			// �Ҽ��� 3�ڸ����� ǥ��
			cout << average2 << "%" << "\n";		// ����̹Ƿ� �������� % �߰�
		}
		
	return 0; // �ʱ�ȭ
}