#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int seed = 0;
	printf("씨드 값 입력: \n");
	scanf("%d", &seed);
	srand(seed); // 씨앗을 심음, 발생할 난수의 씨드 값을 지정하는 srand함수임
	
	for(int i = 0; i < 5; i++)
		printf("정수 출력 : %d \n", rand()); // 열매를 수확함
	
	return 0;
}

