#include <stdio.h>

int Change(int ch)
{
	int diffrent = 'a' - 'A';
	
	if(ch >= 'A' && ch <= 'Z')
		return ch + diffrent;
	else if(ch >= 'a' && ch <= 'z')
		return ch - diffrent;
	else
		return -1;
}

int main(void)
{
	int ch;
	printf("문자입력: \n");
	
	ch = getchar();
	ch = Change(ch);
	if(ch == -1)
	{
		puts("범위를 벗어난 입력입니다. \n");
		return -1;
	}
	putchar(ch);
	return 0;
}
