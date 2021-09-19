#include <stdio.h>


int main(void)
{
	int N = 0; //입력할 수
	int a = 2; //첫항
	int d = 5; //2항으로 넘어갈때의 차이
	int cnt = 2; //시작과 끝
	scanf("%d", &N);
	
	if(N == 1)
	{
		printf("%d", 1);
		return 0;
	}
	
	while(1)
	{
		if(a <= N && a + d >= N)
		{
			printf("%d", cnt);
			break;
		}
		a = a + d + 1;
		d += 6;
		cnt++;
	}
}