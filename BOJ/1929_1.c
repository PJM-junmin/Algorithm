#include <stdio.h>

#define Max 1000001
int arr[Max] = {0, };

void primeNumberSieve(int M1, int N1)
{
	
	for(int i = 2; i <= N1; i++)//배열안에 값을 넣어줌
	{	
		arr[i] = i;
		for(int i = 2; i <= N1; i++)
		{
			if(arr[i] == 0)
				continue; //조건 확인 위로 감, 자기 자신은 지워지지 않음
			for(int j = i + i; j <= N1; j += i) // i의 배수는 다 0으로 체움
				arr[j] = 0;
		}
	}
	for(int k = M1; k <= N1; k++)
		if(arr[k] != 0)
		printf("%d\n", arr[k]);
}

//Aratosthenes의 체는 소수 판별 알고리즘이다. 
int main(void)
{	
	int M = 0, N = 0;
	scanf("%d %d", &M, &N);
	
	primeNumberSieve(M, N);
	
	return 0;
}