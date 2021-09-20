#include <stdio.h>

int main(void)
{
	int arr[10];
	
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		printf("입력: %d\n", arr[i]);
	}
	
	printf("홀수 출력: ");
	for(int j = 0; j < 10; j++)
	{
		if(arr[j] % 2 == 1)
			printf("%d ", arr[j]);
	}
	
	printf("\n");
	
	printf("짝수 출력: ");
	for(int k = 0; k < 10; k++)
	{
		if(arr[k] % 2 == 0)
			printf("%d ", arr[k]);
	}
	
	return 0;
}