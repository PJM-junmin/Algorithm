#include <stdio.h>

void Show_Arr_2D_Style(int (*arr)[4], int column) //배열 요소 전체 출력
{
	for(int i = 0; i < column; i++)
	{
		for(int j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int Sum_2D_Arr(int arr[][4], int column) //배열 요소의 합 변환
{
	int sum = 0;
	for(int i = 0; i < column; i++)
		for(int j = 0; j < 4; j++)
			sum += arr[i][j];
	
	return sum;
}

int main(void)
{
	int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	int arr2[3][4] = {1, 1, 1, 1, 3, 3, 3, 3, 5 ,5 ,5 ,5};
	
	Show_Arr_2D_Style(arr1, sizeof(arr1) / sizeof(arr1[0]));
	Show_Arr_2D_Style(arr2, sizeof(arr2) / sizeof(arr2[0]));
	
	printf("arr1의 합: %d \n", Sum_2D_Arr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2의 합: %d \n", Sum_2D_Arr(arr2, sizeof(arr2) / sizeof(arr2[0])));
	
	return 0;
}