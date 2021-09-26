#include <stdio.h>

int main(void) 
{
	char str[50];
	int index = 0;
	
	printf("문자열 입력: \n");
	scanf("%s", str); //문자열을 입력받아서 배열 str에 저장
	printf("입력받은 문자열: %s \n", str); //str앞에 &연산자를 삽입하지 않음
	
	printf("문자 단위 출력: ");
	while(str[index] != '\0')
	{
		printf("%c", str[index]);
		index++;
	}
	printf("\n");
	
	return 0;
}