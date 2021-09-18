#include <stdio.h>

int main(void)
{
	int num1=0, num2=0;
	int result=0;
	printf("두개의 정수를 입력해주세요");
	scanf("%d %d", &num1, &num2);
	
	for(result=0;num1<=num2;num1++)
	{
		result+=num1;
	}
	printf("%d\n",result);
	
	return 0;
}