#include <stdio.h>


int main(void)
{
	int N = 0, i = 0, j = 0, room = 0;
	scanf("%d", &N);
	
	while(1)
	{
		if(N <= 6 * i + 1) //방의 수 * 벽 + 1(첫 항)
		{
			room = j + 1;
			break;
		}
		j++; //j를 더한다, 방 둘래 증가
		i += j; //방의 벽 2배 ...
	}
	
	printf("%d", room);
	return 0;
}