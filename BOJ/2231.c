#include <stdio.h>

int main(void)
{
	int N = 0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		int temp = i;
		int num = i;
		
		while(temp > 0) //생산자 판별
		{
			num += temp % 10; // num + temp % 10
			temp /= 10; // temp / 10
		}
		if(num == N)
		{
			printf("%d", i);
			N = 0;
			break;
		}
	}
	if(N != 0)
		printf("0");
	return 0;	
}
