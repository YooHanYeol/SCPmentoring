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
	double average2;   // 선언은 반복문 안에 넣는게 아니라 처음부터 선언
	// int val2, val3;

		cin >> val0; // 테스트케이스 값 입력
		for (j = 0; j < val0; j++) // val0값만큼 j 값 증가
		{
			cin >> val1[j]; // 배열 val1값 입력
			sum = 0;	// 총합 초기화
			count = 0;	// 평균보다 높은 값 개수 초기화
	
			for (i = 0; i < val1[j]; i++) //  val1값만큼 i 값 증가
			{
				cin >> val2[i]; // 배열 val2값 입력
				sum += val2[i]; // val2값들 더함 (총합)
			}
			
			average = sum / val1[j]; // 총합을 배열 갯수로 나눔 (평균)
			
			for (i = 0; i < val1[j]; i++) // val1값만큼 i 값 증가
			{
				if (val2[i] > average) // 평균보다 val2배열 값이 클때
					count++;		   // 평균보다 높은 값 개수 증가
			}
			average2 = (count / val1[j]) * 100; // val1값을 카운트로 나누고 100을 곱함
			
			cout << fixed;
			cout.precision(3);			// 소수점 3자리까지 표현
			cout << average2 << "%" << "\n";		// 평균이므로 마지막에 % 추가
		}
		
	return 0; // 초기화
}