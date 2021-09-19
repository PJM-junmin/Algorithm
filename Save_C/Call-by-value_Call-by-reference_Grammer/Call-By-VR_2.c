#include <stdio.h>

void Swap3(int * n1, int * n2, int * n3)
{
	int temp = *n3;
	*n3 = *n2;
	*n2 = *n1;
	*n1 = temp;
}

int main(void)
{
	int num1 = 0, num2 = 0, num3 =0;
	printf("3개의 정수를 입력하시오 \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("3개의 정수: %d, %d, %d \n", num1, num2, num3);
	
	Swap3(&num1, &num2, &num3);
	
	printf("뒤 바뀐 3개의 정수: %d, %d, %d \n", num1, num2, num3);
	return 0;	
}