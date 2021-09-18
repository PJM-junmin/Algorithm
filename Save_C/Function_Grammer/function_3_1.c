#include <stdio.h>

int Pivonachi(int n)
{
	if (n <= 1)
		return n;
	return Pivonachi(n-1) + Pivonachi(n-2);
}

int main(void)
{
   
	int input = 0;
	printf("피보나치 수열 몇번째까지 알려줄까요? \n");
	scanf("%d", &input);
	for(int i = 0; i < input; i++)
	{
	 printf("%d ", Pivonachi(i));
	}
	return 0;
}