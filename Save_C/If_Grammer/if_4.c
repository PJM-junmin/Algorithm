#include <stdio.h>

int main(void)
{
	
	int A = 0, B = 0;
	
	scanf("%d %d", &A, &B);
	
	int result = ( A > B ) ? (A - B) : (B - A);
	
	printf("%d", result);
	return 0;
	
}