#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Convert_language(int str)
{
	int diff = 1 - '1'; // 모든 숫자n과 아스키 코드의 숫자 n의 차는 동일하다
	return str + diff;
}

int main(void)
{
	char str[100];
	int len = 0;
	int sum = 0;
	
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str); //전달된 문자열의 길이를 반환
	
	for(int i = 0; i < len; i++)
	{
		if('1'<= str[i] && str[i] <= '9')
			sum += Convert_language(str[i]);
	}
	printf("총 숫자의 합: %d\n", sum);
	
	return 0;
}
