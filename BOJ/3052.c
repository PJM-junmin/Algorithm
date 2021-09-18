#include <stdio.h>

int main(void) 
{
    int result = 0;
	int arr[10];
	
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}
	
	for(int i = 0; i < 10; i++)
	{
		int cnt = 0;
		for(int j = 0; j < i; j++)
		{
			if(arr[i] == arr[j])
				cnt++;
		}
		if(cnt == 0)
			result++;
	}
	
	
	printf("%d \n", result);
	return 0;
	
}