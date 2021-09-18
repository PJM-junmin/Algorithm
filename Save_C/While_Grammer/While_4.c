#include <stdio.h>

int main(void)
{
	int num=0, cunt=0;
	printf("3의 배수의 겟수: \n");
	scanf("%d",&num);
	
	while(cunt++<= num)
	{
		printf("%d ", 3*cunt);
	}
	return 0;
	
}