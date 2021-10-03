#include <stdio.h>

int turnArr(int (*arr)[4], int length);
int ShowArr(int (*arr)[4], int length);


int main(void)
{
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	printf("arrSize = %d\n\n", arrSize);
	
	for(int i = 0; i < 4; i++)
	{
		ShowArr(arr, 4);
		turnArr(arr, 4);
	}
	
	ShowArr(arr, 4);
	
	return 0;
}

int turnArr(int (*arr)[4], int length)
{
	int turnArr[4][4];
	
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < length; j++)
		{
			turnArr[j][4 - 1 - i] = arr[i][j];
		}
	}
	
	for(int i = 0; i < length; i++)
	{
		for(int j = 0; j < length; j++)
		{
			arr[i][j] = turnArr[i][j];
		}
	}
	
	printf("\n");
}

int ShowArr(int (*arr)[4], int length)
{	
	for(int i = 0; i < length; i++)
	{
    	for(int j = 0; j < length; j++)
		{
        	printf("%d ", arr[i][j]);
        }
    printf("\n");
	}
}

