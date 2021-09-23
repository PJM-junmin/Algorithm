#include <stdio.h>

int Prime_num(int N)
{
	if(N <= 1)
        return 0;
	for(int i = 2; i < N; i++)
		if(N % i == 0)
			return 0;
	return 1;
}

int main(void)
{
	int M = 0, N = 0, Num = 0, Sum = 0, Min = 0;
	scanf("%d", &M);
	scanf("%d", &N);

	
	Num = N - M + 1;
	int arr[Num];
	
	for(int i = 0; i < Num; i++)
	{
		arr[i] = M;
		M++;
		
		if(Prime_num(arr[i]) == 1)
			Sum += arr[i];
		else
			arr[i] = 0;
	}
	
	for(int j = 0; j < Num; j++)
	{
		if(arr[j] != 0)
		{
			Min = arr[j];
			break;
		}
	}
	
	if(Min == 0)
		printf("-1");
	else
	{
		printf("%d\n", Sum);
		printf("%d", Min);
	}
	
	return 0;
}