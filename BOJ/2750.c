#include <stdio.h>

int main(void)
{
   	int Num = 0, temp = 0;
	scanf("%d", &Num);
	int arr[Num];
	
	for(int i = 0; i < Num; i++)
		scanf("%d", &arr[i]);
	
	for(int i = 0; i < Num; i++)
	{
		for(int j = 0; j < Num; j++)
		{
			if(arr[j] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < Num; i++)
	{
		if(arr[i] == arr[i + 1])
			;
		else
			printf("%d\n", arr[i]);
	}
	
	return 0;
}
