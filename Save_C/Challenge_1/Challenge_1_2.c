#include <stdio.h>

int Gougoudan(int A, int B)
{	
	for(A; A <= B; A++)
	{
		for(int i = 1; i <= 9; i++)
		{
			printf("%d x %d = %d\n", A, i, A*i);
		}
		
	}	
}


int main(void)
{
    int input_A = 0, input_B = 0;
	
	scanf("%d %d", &input_A, &input_B);
	
	if(input_A < input_B)
		Gougoudan(input_A, input_B);
	
	else if(input_A > input_B)
		Gougoudan(input_B, input_A);
	
	return 0;
	
}