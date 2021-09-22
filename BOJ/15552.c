#include <stdio.h>

int main(void)
{
	int Num = 0, A = 0, B = 0;
	scanf("%d ", &Num);
	
	for(int i = 0; i < Num; i++)
	{
		scanf("%d %d ", &A, &B);
		printf("%d\n", A + B);
	}
	
	return 0;
}