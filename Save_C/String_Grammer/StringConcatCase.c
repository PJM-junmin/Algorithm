#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "First ~ ";
	char str2[20] = "Second";
	
	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";
	
	//case 1
	strcat(str1, str2); //str1 문자열 뒤에 str2를 덧붙여라
	puts(str1); //str1을 출력해라
	
	//case 2
	strncat(str3, str4, 7); //str3 문자열에 str4의 문자열을 덧붙이 되 총 7개의 문자열을 덧붙여라.
	puts(str3); //널 문자를 포함하여 8개의 문자가 덧붙여짐
	
	return 0;
}
