#include <stdio.h>

int main(void)
{
	int N = 0, i = 2;
	scanf("%d", &N);
	
	while(N > 1)
	{
		int Mod = 0;
		Mod = N % i;
		if(Mod == 0)
		{
			printf("%d\n", i);
			N /= i;
		}
		else
			i++;
	}
	
	
	return 0;
}