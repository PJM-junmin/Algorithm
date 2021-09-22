#include <stdio.h>

int main(void)
{
	int X = 0, A = 0, B = 0;
	scanf("%d", &X);
	
	for(int i = 1; i <= X; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d \n", i, A, B, A + B);
	}
	
	return 0;
}