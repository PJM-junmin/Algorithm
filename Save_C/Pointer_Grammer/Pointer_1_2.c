#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int * ptr1 = &num1; 
	int * ptr2 = &num2;
	int * temp;
	
	(*ptr1) += 10;
	(*ptr2) -= 10;
	
	temp = ptr1; // temp가 ptr1을 가리킴
	ptr1 = ptr2; // ptr1이 ptr2를 가리킴
	ptr2 = temp; // ptr2가 temp를 가리킴
	
	printf("%d, %d\n", *ptr1, *ptr2);
	return 0;
}