#include <stdio.h>

int Sum()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int arr[15][15] = {0, };
		
		for(int j = 0; j < 15; j++)
		{
			arr[0][j] = j;//호 수
		}
	
		for(int i = 1; i < 15; i++)
		{
			for(int j = 1; j < 15; j++)
			{
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
	printf("%d \n", arr[a][b]);
}

int main(void)
{
	int Time = 0;
	scanf("%d", &Time);
	
	for(int i = 0; i < Time; i++)
		Sum();
	
	return 0;
}