#include <stdio.h>

int main(void)
{
  	int arr[246913] = {0, };
	int n = 0, cnt = 0;
	
	
	while(1)
	{
		scanf("%d", &n);
	
		if(n == 0)
			break;
		
		arr[0] = 1;
		arr[1] = 1;
		cnt = 0;
		
		for(int i = 2; i <= 2 * n; i++)
		{
			for(int j = 2 * i; j <= 2 * n; j += i)
			{
				if(arr[j] == 0)
					arr[j] = 1;
			}
		}
	
		
		for(int i = n + 1; i <= 2 * n; i++)
		{
			if(arr[i] == 0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	
	
	return 0;
	
}
