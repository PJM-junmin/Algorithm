#include <stdio.h>

int main(void)
{
	int Num = 0, input = 0, max = 0, min = 0;
	scanf("%d", &Num);
	
	int arr[Num];
	
	for(int i = 0; i < Num; i++)
	scanf("%d", &arr[i]);
	
	max = min = arr[0];
	for(int j = 0; j < Num; j++)
	{
		if(max < arr[j])
			max = arr[j];
		if(min > arr[j])
			min = arr[j];
	}
	
	
	printf("%d %d\n", min, max);
	return 0;
}