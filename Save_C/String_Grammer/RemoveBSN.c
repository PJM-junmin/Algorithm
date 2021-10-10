#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) //'\n'문자 소멸 함수
{
	int len = strlen(str); 
	//문자열의 길이 계산 -> \n이 저장된 위치에 널 문자의 아스키 코드 값 0을 저장하고 있다.
	//따라서 '\n'은 문자열에서 사라진 셈임
	str[len - 1] = 0;
}

int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin); //fgets함수 호출을 통해 문자열을 입력 받고 있음
	printf("길이: %ld, 내용: %s \n", strlen(str), str);
	
	RemoveBSN(str);
	printf("길이: %ld, 내용: %s \n", strlen(str), str);
	
	return 0;
}
