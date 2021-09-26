#include <stdio.h>

int main(void) 
{
	char str[100]; //배열 수를 받는다.
	int length = 0; //문자열의 길이
	char temp; //저장할 문자
	
	printf("영단어를 적으세욤: \n");
	scanf("%s", str); //문자열 입력
	
	while(str[length] != 0) //문자열의 길이를 구함
	length ++;
	
	for(int i = 0; i < length / 2; i++) 
		//int i =0부터 i 가 문자열의 길이 / 2 보다 작아질 때까지, i 증가,
		//reson:앞 뒤 위치를 바꾸는 거라서, 또 바꿀 필요가 없음 
	{
		temp = str[i]; // 1번째 배열의 값을 temp에 저장
		str[i] = str[(length - i) -1]; //i번째 배열의 값을 앞으로 땡김
		str[(length - i) -1] = temp; //땡긴 값을 앞의 배열로 저장
	}
	
	printf("뒤집힌 영단어: %s", str);
	return 0;
}