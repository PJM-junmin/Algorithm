#include <stdio.h>

int main(void)
{
	int num1=0, i=0;
	
	scanf("%d", &num1);
	
	for(i=1; i<10; i++)
	{
		printf("%d * %d = %d\n", num1, i, num1*i);
	}
	return 0;
	
}