#include <stdio.h>
#include <math.h>

	int number = 1000; // 최대값
	int a[1001]; //방 개수

void primeNumberSieve()
{
	for(int i = 2; i <= number; i++)//배열안에 값을 넣어줌
	{	a[i] = i;
		for(int i = 2; i <= number; i++)
		{
			if(a[i] == 0)
				continue; //조건 확인 위로 감, 자기 자신은 지워지지 않음
			for(int j = i + i; j <= number; j += i) // i의 배수는 다 0으로 체움
			{
				a[j] = 0;
			}
		}
	}
	for(int i = 2; i <= number; i++)
		if(a[i] != 0) // 0이 아닌 수는 소수임
			 printf("%d ", a[i]);
}

//Aratosthenes의 체는 소수 판별 알고리즘이다. 
int main(void)
{	
	primeNumberSieve();
	
	return 0;
}