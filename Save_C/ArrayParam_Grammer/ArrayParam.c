#include <stdio.h>

void ShowArayElem(int * param, int len) //매개변수 포인터 int형 param, int형 len
{
	for(int i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

int main(void)
{
	int arr1[3] = {1, 2, 3};
	int arr2[5] = {4, 5, 6, 7, 8};
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	
	return 0;
}