#include <stdio.h>

int main(void)
{
	int num=0;
	int i=0;
	
	scanf("%d", &num);
	for(i=num; i>0; i--)
	{
		printf("%d\n", i);
	}
	
	return 0;
}