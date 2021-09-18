#include <stdio.h>

int main(void)
{
	int cnt=0, i=0;
	int num1=0, num2=0;
	scanf("%d", &cnt);
	
	for(i=1; i<=cnt; i++)
	{
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1+num2);
	}
	return 0;
}