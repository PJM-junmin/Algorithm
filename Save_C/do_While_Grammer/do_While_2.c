#include <stdio.h>

int main(void)
{
	int cur=2;// cur= 단 변수
	int is=0;// 각 단의 1~9까지의 곱 변수
	
	do
	{
		do
		{
			printf("%dx%d=%d\n", cur, is, cur*is);
			is++;
		}while(is<10);
		is=0;
		cur++;
		
	}while(cur<10);
	
	return 0;
}