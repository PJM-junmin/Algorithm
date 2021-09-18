#include <stdio.h>

int main(void)
{
	int N=0, X=0;
	int input=0;
	scanf("%d %d", &N, &X);
	
	for(int i=0; i<N; i++)
	{
		scanf("%d", &input);
		
	 	if(input<X)
		{
			printf("%d", input);
		}
	}
	return 0;
}