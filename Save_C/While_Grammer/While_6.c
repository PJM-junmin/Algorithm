#include <stdio.h>

int main(void)
{
	int num=0;
	int i=9;
	
	printf("구구단 몇단 ? (역순으로 보여줌)\n");
	scanf("%d", &num);
	
	while(i>0){
		printf("%d x %d = %d\n", num, i, i*num);
		i--;
	}
	return 0;
}
