#include <iostream>

int main(void)
{
	while (1)
	{

		int val1;

		std::cout << "숫자를 입력하세요 :(0입력시 종료)" << std::endl;
		std::cin >> val1;
		
		if (val1 == 0)
			break;

		
		std::cout << "구구단" << val1 << "단 입니다." << std::endl;

		

		for (int i = 1; i < 10; i++)
		{
			std::cout << val1 << " x " << i << " = " << val1*i << std::endl;
		}

		
	}

	return 0;
}