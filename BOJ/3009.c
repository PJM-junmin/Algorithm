#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;
	int A1 = 0, A2 = 0, A3 = 0;
	int B1 = 0, B2 = 0, B3 = 0;
	
	scanf("%d %d", &A1, &B1);
	scanf("%d %d", &A2, &B2);
	scanf("%d %d", &A3, &B3);
		
	if(A1 == A2)
		x = A3;
	else if(A2 == A3)
		x = A1;
	else
		x = A2;
	
	if(B1 == B2)
		y = B3;
	else if(B2 == B3)
		y = B1;
	else
		y = B2;
	
	printf("%d %d", x, y);
	
	
	return 0;
}