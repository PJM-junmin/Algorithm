//출처 하늘보리: https://artiper.tistory.com/71
#include <stdio.h>

int arr[1000001]; //전역 변수: 자동으로 0으로 초기화

void PrimeNum(int m, int n)
{

	arr[0] = 1;
	arr[1] = 1;

	
	for (int i = 2; i <= n; i++) //n이하의 모든 수 나열(2부터, 2는 소수)
	{ 
		for (int j = 2 * i; j <= n; j += i) 
			/*소수는 2부터 시작, j = 2가 처음 수, j += 1은 배수를 찾게하는 것이다
			ex: 2의 배수 부터 n이하의 배수까지.. 
			*/
		{
			if (arr[j] == 0) //일단 모든 배열이 0이긴하지만 for에서 2~n이하의 배수만 고르는 꼴
			{
				arr[j] = 1; //배수는 배열에서 1로 체크된다.
			}
		}
	}

	for (int i = m; i <= n; i++) {
		if (arr[i] == 0) printf("%d\n", i);
	}
}

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);

	PrimeNum(M, N);

	return 0;
}