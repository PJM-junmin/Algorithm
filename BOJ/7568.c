#include <stdio.h>

int main(void)
{
    int Num = 0, cnt = 1;
	int x[50] = {0, };
	int y[50] = {0, };
	
	scanf("%d", &Num);
	
	for(int i = 0; i < Num; i++)
		scanf("%d %d", &x[i], &y[i]);
	
	for(int i = 0; i < Num; i++)
	{
		cnt = 1;
		for(int j = 0; j < Num; j++)
		{
			if(x[i] < x[j] && y[i] < y[j])
				cnt++;
		}
		printf("%d ", cnt);
	}
	
	
	return 0;
}
