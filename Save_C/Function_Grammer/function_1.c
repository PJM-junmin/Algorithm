#include <stdio.h>

int MaxNum(int A, int B, int C)
{
	if(A > B)
		return (A > C) ? A : C;
	else 
		return (B > C) ? B : C;
}

int MinNum(int A, int B, int C)
{
	if(A < B)
		return (A < C) ? A : C;
	else
		return (B < C) ? B : C;
}

int main(void)
{
	int A1 = 0, B1 = 0, C1 = 0;
	
	printf("3개의 정수 입력: ");
	scanf("%d %d %d", &A1, &B1, &C1);
	
	printf("3개중 제일 큰 수는 %d\n", MaxNum(A1, B1, C1));
	printf("3개중 제일 작은 수는 %d\n", MinNum(A1, B1, C1));
	
	return 0;
}