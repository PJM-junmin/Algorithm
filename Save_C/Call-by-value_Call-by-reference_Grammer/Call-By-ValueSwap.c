#include <stdio.h>

void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1, n2: %d, %d \n", n1, n2);
}

//num1과 num2에 저장된 값은 n1과 n2에 저장된 값과 완전히 별개의 것

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1, num2: %d, %d \n", num1, num2);
	
	Swap(num1, num2);
	printf("num1, num2: %d, %d \n", num1, num2);
	return 0;
}