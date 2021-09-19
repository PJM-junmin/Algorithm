#include <stdio.h>

int SquareByValue(int n1) //int 형으로 반환함
{
	return n1 * n1;
}

void SquareByReference(int * ptr) //'void' = return이 없는 자료형
{
	int result = *ptr;
	*ptr = result * result;
}

int main(void)
{
	int num1 = 0;
	int M = 0;
	
	printf("제곱할 숫자는? \n");
	scanf("%d", &num1);
	printf("Value 방식: 1입력, Reference 방식: 2입력\n");
	scanf("%d", &M);
	
	if(M == 1)
		printf("%d \n", SquareByValue(num1));	
	
	if(M == 2)
	{
		SquareByReference(&num1);
		printf("%d \n", num1);
	}
	return 0;
}