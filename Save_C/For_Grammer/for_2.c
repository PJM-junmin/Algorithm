#include <stdio.h>

int main(void)
{
	int num1=0, i=0;
	int result=1;
	
	printf("몇 펙토리얼입니까: \n");
	scanf("%d", &num1);
	
	for(i=1; i<=num1; i++)
	{
		result=result*i;
	}
	
	printf("%d! = %d\n", num1, result);
	return 0;
	
}