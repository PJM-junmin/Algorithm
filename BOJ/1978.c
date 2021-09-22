#include <stdio.h>

int main(void)
{
	int Time = 0;
	scanf("%d", &Time);
	int arr[Time];
	int cnt = 0;
	
	for(int i = 0; i < Time; i++)
	{
		scanf("%d", &arr[i]);
		int j = arr[i];
		for(int k = 2; k <= j; k++)
		{
			if(j == k && j % k == 0)
			{
				cnt++;
			}
			else if(j != k && j % k == 0)
				break;
		}
	}
	
	printf("%d\n", cnt);
	
	return 0;
}