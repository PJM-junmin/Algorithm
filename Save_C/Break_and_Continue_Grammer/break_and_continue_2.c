#include <stdio.h>

int main(void)
{
	int sum = 0;
	
	for(int A = 0; A < 10; A++)
	{
		for(int B = 0; B < 10; B++)
		{
			if(A ==B)
				continue;//있어도 되고 없어도 됨
			sum = (10*A + B)+(10*B + A);
			if(sum == 99)
				printf("%d %d\n", A, B);
			
			
		}
	}
	return 0;
}