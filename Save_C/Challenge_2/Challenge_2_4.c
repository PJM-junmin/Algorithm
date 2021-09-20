#include <stdio.h>

int Palindrome(char * ptr)
{
	int cnt = 0;
	
	while (ptr[cnt] != '\0')
		cnt++;
	
	return cnt; //len으로 들어감
}

	
int main(void)
{
	char str[50];
	int len;
	
	printf("문자열 입력: \n");
	scanf("%s", str);
	
	len = Palindrome(str);
	
	for(int i = 0; i < len / 2; i++)
	{
		if(str[i] == str[len - 1 - i])
		{
			printf("회문 입니다");
			return 0;
		}
	}
	
	printf("회문 아닙니다");
	
	return 0;
	
}