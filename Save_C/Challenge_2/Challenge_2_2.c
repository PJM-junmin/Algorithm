#include <stdio.h>

int main(void)
{
	int num = 0;
	int arr[100];
	int i = 0;
	printf("10진수 정수 입력: \n");
	scanf("%d", &num);
	
	while(num) // num != 0; 
	{
		arr[i] = num % 2;
		num = num / 2;
		i ++;
	}
	
	while(i != 0)
	{
		i--;
		printf("%d", arr[i]);
	}
	
	return 0;
}