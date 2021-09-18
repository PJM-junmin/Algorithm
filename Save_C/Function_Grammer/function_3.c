#include <stdio.h>

int Pivonachi(int num)
{
	int F1 = 0, F2 = 1, result = 0;
	
	if(num == 1)
	 	printf("0 ");
	else
		printf("0 1 ");
	
	for(int i = 0; i < num - 2; i++)
	{
		result = F1 + F2; //앞에 두수의 합은 뒤에 수이다
		printf("%d ", result);
		F1=F2; //F1이 F2가 된다
		F2=result; //F2는 result가 된다
	}
		
}

int main(void)
{
   
	int input = 0;
	printf("피보나치 수열 몇번째까지 알려줄까요? \n");
	scanf("%d", &input);
	Pivonachi(input);
		
	return 0;
}