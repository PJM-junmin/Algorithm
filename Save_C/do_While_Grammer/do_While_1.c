#include <stdio.h>

int main(void)
{
	int num=0, sum=0;
	printf("0부터 100까지에서 짝수의 합\n");
	
	do
	{
		sum+=num;
		num=num+2; // num = num+num%2
	    
	}while(num<=100);
	printf("합계: %d", sum);
	return 0;
}