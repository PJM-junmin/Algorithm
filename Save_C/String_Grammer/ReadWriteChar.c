#include <stdio.h>

int main(void)
{
	int ch1, ch2;
	
	//키보드로 부터 각각 하나의 문자를 입력 받고 있음
	ch1 = getchar(); // 문자 입력
	ch2 = fgetc(stdin); // 엔터 키 입력
	
	//모니터로 각각 하나의 문자를 출력하고 있음
	putchar(ch1); // 문자 출력
	fputc(ch2, stdout); //엔터 키 출력

	return 0;	
}
