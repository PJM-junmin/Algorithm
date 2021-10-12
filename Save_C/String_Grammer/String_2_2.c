#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];
	
	printf("첫 번째 문자열: \n");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; //\n문자 삭제 , strlen(문자열) = 문자열의 길이(byte단위 길이)
	
	printf("두 번째 문자열: \n");
	fgets(str2, sizeof(str2), stdin);
	str1[strlen(str1) - 1] = 0; //\n문자 삭제 , 제일 끝 배열에 있는 문자 삭제 str1[str1의 길이 - 1]
	
	strcpy(str3, str1); // 뒤에 있는 인자(문자열)를 앞의 인자(문자열)에 복사
	strcat(str3, str2); // 앞에 인자(문자열) 뒤에 뒤에 인자(문자열)가 붙음
	printf("조합 결과: %s \n", str3);
	
	return 0;
}
