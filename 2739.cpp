#include <iostream>

using namespace std;

int main(void)
{
	int val1; // val1�� ��Ʈ������ ����

	cin >> val1; // val1�� �Է¹���

	for (int i = 1; i < 10; i++) //�������̹Ƿ� 9�� �ݺ�
		cout << val1 << " * " << i << " = " << val1 * i << endl;
	// val1�� ���ϱ� i(1~9 ����) �� val * i 
	return 0;
}