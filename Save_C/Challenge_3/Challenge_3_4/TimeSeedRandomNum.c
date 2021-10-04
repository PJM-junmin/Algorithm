#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL)); //현재시간을 초단위로 받음
	
	for(int i = 0; i < 5; i++)
	{
		printf("정수 출력: %d \n", rand());	
	}
	
	return 0;
}

