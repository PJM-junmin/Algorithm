#include <stdio.h>
#include <math.h>

//비효율적인 소수 판별 알고리즘
int isPrime_num(int N)
{
	int end = (int) sqrt(N); //sqrt는 그 수의 제곱근을 구해주는 함수
	for(int i = 2; i <= end; i++)
	{
		if(N % i == 0)
			return 0; // 소수 아님
	}
	return 1; // 소수임
}

int main(void)
{	
	int Num = 0;
	scanf("%d", &Num);
	printf("%d ", isPrime_num(Num));
	return 0;
}