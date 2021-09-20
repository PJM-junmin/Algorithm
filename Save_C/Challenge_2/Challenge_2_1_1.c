#include <stdio.h>

void odd(int * ptr, int len)
{
	int num = 0;
	
	printf("홀수 출력: ");
	for (int i = 0; i < len; i++)
	{
		num = * (ptr + i);
		if (num % 2 == 1)
			printf("%d ", num);
	}

}

void even(int * ptr, int len)
{
	int num = 0;
	
	printf("짝수 출력: ");
	for (int i = 0; i < len; i++)
	{
		num = * (ptr + i);
		if (num % 2 == 0)
			printf("%d ", num);
	}
}
	
int main(void)
{
	int arr[10];
	int len = sizeof(arr) / sizeof(int);
	int * ptr = arr;
	
	for(int i = 0; i < 10; i++)
		scanf("%d", arr + i);
	
	odd(ptr,len);
	printf("\n");
	even(ptr, len);
	
	return 0;
	
}