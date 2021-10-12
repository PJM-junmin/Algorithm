#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Get_Space_index(char str[])
{
	int len;
	len = strlen(str);
	for(int i = 0; i < len; i++)
	{
		if(str[i] == ' ')
			return i;
	}
	return -1;
}

int CompName(char str1[], char str2[])
{
	int index1 = Get_Space_index(str1);
	int index2 = Get_Space_index(str2);
	
	if(index1 != index2)
		return 0;
	else
		return !strncmp(str1, str2, index1); // strncmp(str1, str2, index1) == 0;
	//strncmp(비교할 문자열1, 비교할 문자열2, 비교할 문자열 길이)
}

int CompAge(char str1[], char str2[])
{
	int index1 = Get_Space_index(str1);
	int index2 = Get_Space_index(str2);
	int age1 = 0, age2 = 0;
	
	age1 = atoi(&str1[index1 + 1]);
	// atoi(문자열을 int형으로 바꿈) == ato_int.. ato_float_ ato_double...
	// 단, ato(N)함수의 반환은 문자가 나오면 0으로 반환 그전까지는 숫자로 반환
	age2 = atoi(&str2[index2 + 1]);
	
	if(age1 == age2)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str1[100];
	char str2[100];
	
	printf("첫 번째 사람의 이름과 나이 입력: \n");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	
	printf("두 번째 사람의 이름과 나이 입력: \n");
	fgets(str2, sizeof(str2), stdin);
	str1[strlen(str2) - 1] = 0;
	
	if(CompName(str1, str2))
		puts("이름이 동일하다!");
	else 
		puts("이름이 동일하지 않다..");
	
	if(CompAge(str1, str2))
		puts("나이가 같습니다!");
	else
		puts("나이가 같지 않습니다..");
	
	return 0;
}
