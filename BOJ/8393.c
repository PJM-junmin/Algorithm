#include <stdio.h>

int main(void)
{
	int num=0;
	int i=0;
	int result=0;
	
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		result=result+i;
	}
	printf("%d", result);
	
	return 0;
}