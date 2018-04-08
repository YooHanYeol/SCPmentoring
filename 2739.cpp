#include <iostream>

using namespace std;

int main(void)
{
	int val1; // val1값 인트형으로 정의

	cin >> val1; // val1값 입력받음

	for (int i = 1; i < 10; i++) //구구단이므로 9번 반복
		cout << val1 << " * " << i << " = " << val1 * i << endl;
	// val1값 곱하기 i(1~9 증가) 는 val * i 
	return 0;
}