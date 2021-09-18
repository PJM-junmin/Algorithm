#include <stdio.h>

int main(void)
{
	int Dnum=0, num=1;
	printf("구구단 몇 단 할래요?");
    scanf("%d", &Dnum);
	
	while(num<=9)
	{
		printf("%d x %d=%d\n", Dnum, num, Dnum*num);
		num++;
	}
	return 0;
}