#include <stdio.h>


int main(void)
{
	int arrA[2][4];
	int arrB[4][2];
	int Num = 0;
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			arrA[i][j] = Num + 1;
			Num++;
			printf("%d ", arrA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(int j = 0; j < 4; j++)
	{
		for(int i = 0; i < 2; i++)
		{
			arrB[i][j] = arrA[i][j];
			printf("%d ", arrB[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}