#include <stdio.h>

int squared(int num)
{
	int result = 1;
	int i = 0;
	
	for(i; result <= num; i++)
	{
		result = result * 2;
	}
	return i;
}


int main(void)
{
 	int num = 0;
	printf("상수 n 입력: \n");
	scanf("%d", &num);
	if(num == 1)
	{
		printf("1 초과의 자연수 입력: \n");
		scanf("%d", &num);
	}else
	printf("공식을 만족하는 k의 최대값 : %d \n", squared(num) - 1);
	
	return 0;
}