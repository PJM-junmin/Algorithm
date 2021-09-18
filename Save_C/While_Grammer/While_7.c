#include <stdio.h>

int main(void)
{
	int total=0, i=0;
	int num, input;
	
	
	printf("몇 개의 정수 입력: ");
	scanf("%d", &num);
	
	while(i++<num)
	{
		printf("정수 입력: ");
		scanf("%d", &input);
		total+=input;//total = total+input
		
	}
	printf("입력의 평균: %0.1f \n",(double)total/num);
	return 0;
}