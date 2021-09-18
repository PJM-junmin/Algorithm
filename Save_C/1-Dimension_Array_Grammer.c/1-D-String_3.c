#include <stdio.h>

int main(void) 
{
	char str[100]; //배열 수를 받는다.
	int length = 0; //문자열의 길이
	char max = 0;
	
	printf("영단어를 적으세욤: \n");
	scanf("%s", str); //문자열 입력
	
	while(str[length] != 0) //문자열의 길이를 구함
	length ++;
	
	
	for(int i = 0; i < length; i++)
	{
		if(max < str[i])
			max = str[i];
	}
	
	printf("아스키 코드가 가장 큰 문자: %c \n", max);
		
	return 0;
}