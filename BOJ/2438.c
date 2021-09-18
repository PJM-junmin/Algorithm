#include <stdio.h>

int main(void)
{
	int num=0;
	int i=0, j=0;
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}