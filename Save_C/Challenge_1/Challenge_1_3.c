#include <stdio.h>

int greatest_common_factor(int num1, int num2)
{
	int i = 0;
	
	for(i = num1; i > 1; i--)
	{
		if((num1 % i == 0) && (num2 % i == 0))
			return i;
	}
	
}

int main(void)
{
    int num1 = 0, num2 = 0;
	int result;
	printf("최대공약수를 구할 두 정수 입력: \n");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
		printf("최대공약수: %d", greatest_common_factor(num1, num2));
	else
		printf("최대공약수: %d", greatest_common_factor(num2, num1));
	
	return 0;
}