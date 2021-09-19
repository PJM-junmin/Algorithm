#include <stdio.h>

int main(void)
{
	char * strArr[3] = {"Simple", "String", "Array"};
	// 포인터 배열 변수가 3개의 char형 메모리 공간을 가리킴
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	
	return 0;
}