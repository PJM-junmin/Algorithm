#include <stdio.h>

int main(void)
{
	int Num = 0, input = 0, max = 0, index = 0;
	scanf("%d", &Num);
		
	int arr[Num];
	
	for(int i = 0; i < Num; i++)
	{
		scanf("%d", &arr[i]);
		if(max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	index += 1;
	printf("%d %d\n", max, index);
	return 0;
}