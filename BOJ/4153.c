#include <stdio.h>

int main(void)
{
	
	while(1)
	{
		long n1 = 0, n2 = 0, n3 = 0;
		scanf("%ld %ld %ld", &n1, &n2, &n3);
		long num1 = n1 * n1, num2 = n2 * n2, num3 = n3 * n3; 
		
		if(n1 == 0 && n2 == 0 && n3 ==0)
			break;
		
		if(num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2)
			printf("right\n");
		else
			printf("wrong\n");
			
	}
	

	return 0;
}