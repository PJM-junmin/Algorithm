#include <stdio.h>

int main(void)
{
	long A = 0, B = 0, C = 0;
	scanf("%ld %ld %ld", &A, &B, &C);
	
	if(B >= C)
		printf("-1\n");
	else
		printf("%ld", A/(C-B) + 1);//1은 첫번째 시도했을때의 경우의 수이다.
	
	return 0;
}