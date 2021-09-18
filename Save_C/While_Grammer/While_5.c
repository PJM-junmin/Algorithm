#include <stdio.h>

int main(void)
{
	int total=0;
	int num=1;
		
	while(num!=0)
	{
		printf("더하실 정수: ? (출력 하실거면, 0..)\n");
		scanf("%d\n",&num);
		total+=num;	
	}
	
	printf("입력한 총 정수의 합: %d \n", total);
	return 0;	
}