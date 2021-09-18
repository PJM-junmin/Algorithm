#include <stdio.h>

int main(void)
{
	
	int A = 0, B = 0;
	
	scanf("%d %d", &A, &B);
	
	if(A >= B)
		printf("%d\n", A - B);
	else 
		printf("%d\n", B - A);
	
	return 0;
	
}