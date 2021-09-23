#include <stdio.h>

int Prime_num(int N)
{
	if(N <= 1) //1이하의 정수 또는 음수는 소수가 아니므로 넣어줌
        return 0;
	for(int i = 2; i < N; i++)
		if(N % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	int M = 0, N = 0, Num = 0;
	scanf("%d", &M);
	scanf("%d", &N);

	
	Num = N - M + 1;
	int arr[Num];
	
	for(int i = 0; i < Num; i++)
	{
		arr[i] = M;
		M++;
		
		if(Prime_num(arr[i]) == 1)
			printf("%d\n", arr[i]);
		else
			continue;
	}
	
	return 0;
}