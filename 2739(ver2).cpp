#include <iostream>

int main(void)
{
	while (1)
	{

		int val1;

		std::cout << "���ڸ� �Է��ϼ��� :(0�Է½� ����)" << std::endl;
		std::cin >> val1;
		
		if (val1 == 0)
			break;

		
		std::cout << "������" << val1 << "�� �Դϴ�." << std::endl;

		

		for (int i = 1; i < 10; i++)
		{
			std::cout << val1 << " x " << i << " = " << val1*i << std::endl;
		}

		
	}

	return 0;
}