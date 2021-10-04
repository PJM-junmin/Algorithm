#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);
	for(int i = 0; i < 5; i++)
		printf("난수 출력: %d \n", rand() % 100); //100으로 나눴을때의 나머지는 두자리 수 이다
	
	return 0;
}

