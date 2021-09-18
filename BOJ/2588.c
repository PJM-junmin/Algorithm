#include <stdio.h>

int main(void)
{
	int num1, num2;
	int outp1, outp2, outp3, result;
	
	scanf("%d %d", &num1, &num2);
	
	outp1 = num1*((num2%100)%10);
	outp2 = num1*((num2%100)/10);
	outp3 = num1*(num2/100);
	result = num1*num2;
	printf("%d\n%d\n%d\n%d\n", outp1, outp2, outp3, result);
	return 0;
	
	
}