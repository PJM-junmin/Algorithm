#include <stdio.h>

int main(void)
{
	int X = 0, i = 1;
	scanf("%d", &X);
	
	while(X > i)//개수 파악
	{
		X -= i;
		i++;
	}
	
	if(i % 2 == 1)
		printf("%d/%d", i + 1 - X, X);
	else
		printf("%d/%d", X, i + 1 - X);
	return 0;
	
}