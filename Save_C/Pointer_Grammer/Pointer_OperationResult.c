#include <stdio.h>

int main(void)
{
	int * ptr1;
	double * ptr2;
	
	printf("%p %p \n", ptr1+1, ptr1+2);
	printf("%p %p \n", ptr2+1, ptr2+2);
	
	printf("%p %p \n", ptr1, ptr2);
	ptr1++; //4가 증가 
	ptr2++; //8이 증가
	
	printf("%p %p \n", ptr1, ptr2);
	return 0;
	
}