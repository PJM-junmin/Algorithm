#include <stdio.h>

int main(void) 
{
	char str[100]; //받을 수 있는 배열의 길이
	int length = 0;	//int 변수형
	
	printf("영단어를 적으세욤: \n");
	scanf("%s", str); //문자열을 받음
	
	while(str[length] != 0) //만약 str안의 배열이 '\0'이 아니면
		length ++; //다음 배열로 넘어감
	
	printf("영단어의 길이: %d\n", length);
	
	return 0;
}