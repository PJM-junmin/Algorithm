#include <stdio.h>
#include <math.h>

int main(void)
{
  	int M = 0, N = 0, sum = 0, min = 0;
	int cnt = 0;
	
	scanf("%d %d", &M, &N);
	
	for(; M <= N; M++)
	{
		if(sqrt((double)M) - (int)sqrt((double)M) == 0)
		{
			sum += M;
			cnt++;
			if(cnt == 1)
				min = M;
		}
	}
	
	if(cnt == 0)
		printf("-1");
	else
	{
		printf("%d\n", sum);
		printf("%d", min);
	}
	
	return 0;
	
}
