#include <stdio.h>

void ShowArayElem(int * param, int len) //매개변수 int형 param, int형 len
{
	for(int i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");
}

void AddArayElem(int * param, int len, int add)
{
	for(int j = 0; j < len; j++)
		param[j] += add;
}

int main(void)
{
	int arr[3] = {1, 2, 3};
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	return 0;
}