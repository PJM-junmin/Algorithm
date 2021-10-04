#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);
	
	srand((int)time(NULL));
	
	
	for(int i = 1; i < num; i++)
		printf("주사위 %d의 결과: %d \n", i, rand() % 6);
	
	return 0;
}

