#include <stdio.h>

int main(void)
{
   	int A = 0, B = 0, C = 0;
	scanf("%d %d %d", &A, &B, &C);
	
	if((B <= A && A <= C) || (C <= A && A <= B))
	{
		printf("%d", A);
		return 0;
	}
	if((A <= B && B <= C) || (C <= B && B <= A))
	{
		printf("%d", B);
		return 0;
	}
	if((A <= C && C <= B) || (B <= C && C <= A))
	{
		printf("%d", C);
		return 0;
	}
}
