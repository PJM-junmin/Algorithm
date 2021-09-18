#include <stdio.h>

int Prime_Number(int cnt) // cnt = 몇번째
{
	int num = 0; // 자연수 입력
	for(int i = 2; num < cnt; i++) //2부터 소수라서 i = 2로 설정 계속 1씩 더함
		for(int j = 2; j <= i; j++) //j도 1이 아닌 2부터 계속 나눌꺼
		{
			if(i % j == 0 && j != i) // 자연수 i와 j를 나눴을때 0이고 i가 j랑 똑같이 않으면 빠져나옴
				break;
			else if(j == i && i % j == 0) // 반대일 경우 소수 출력
			{
				printf("%d ", i);	
				num++; //소수 개수임
			}else continue; //둘 다 아니면 계속함 암튼
		}
}

int main(void)
{
 	int cnt = 0;
	printf("소수 몇 번째까지? : \n");
	scanf("%d", &cnt);
	Prime_Number(cnt);
	
	return 0;
}