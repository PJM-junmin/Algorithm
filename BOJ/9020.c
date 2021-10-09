#include <stdio.h>

int main(void)
{
	int arr[10000] = {0, };
	int Num = 0;
	int T = 0;
	
	for(int i = 2; i <= 10000; i++)
	{
		for(int j = 2 * i; j <= 10000; j += i)
		{
			if(arr[j] == 0)
				arr[j] = 1;
		}
	}
	
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++)
	{
		scanf("%d", &Num);
		
			for(int j = Num / 2; j > 1; j--)
			{
				if(arr[j] == 0 && arr[Num - j] == 0)
				{
					printf("%d %d\n", j, Num - j);
					break;
				}
			}
	}
	
	return 0;	
}
