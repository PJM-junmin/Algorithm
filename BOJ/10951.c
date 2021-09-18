#include <stdio.h>

int main(void)
{
	int A=0, B=0;
	while(scanf("%d %d", &A, &B)!=EOF)//EOF = End Of File임 이 조건은 파일의 끝에 다다를때까지 while문 실행하겠다는 소리
	{
		printf("%d\n", A+B);
	}
	return 0;
}