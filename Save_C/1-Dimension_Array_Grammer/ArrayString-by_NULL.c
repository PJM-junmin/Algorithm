#include <stdio.h>

int main(void) //그냥 공백과 Null문자는 다르다는 것을 보여주기 위한 것
{
	char nuLL = '\0'; //널 문자 저장
	char space = ' '; //공백 문자 저장
	printf("%d %d", nuLL, space); //0과 32출력
	return 0;
}