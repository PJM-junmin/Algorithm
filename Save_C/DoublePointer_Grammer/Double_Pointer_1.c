#include <stdio.h>

void MaxAndMin(int *arr, int size, int **dmaxPtr, int **dminPtr)
{
	int *Max, *Min;
	
	Max = Min = &arr[0];
	
	for(int i = 0; i < 5; i++)
	{
		if(*Max < arr[i])
			Max = &arr[i];
		
		if(*Min > arr[i])
			Min = &arr[i];
	}
	
	*dmaxPtr = Max;
	*dminPtr = Min;
}

int main(void)
{
	int *maxPtr;
	int *minPtr;
	int arr[5];
	
	for(int i = 0; i < 5; i++)
	{
		printf("정수 입력: %d\n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("최대: %d\n 최소: %d\n", *maxPtr, *minPtr);
	
	return 0;
}