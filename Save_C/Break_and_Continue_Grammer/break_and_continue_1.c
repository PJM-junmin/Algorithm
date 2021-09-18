#include <stdio.h>

int main(void)
{
	int i = 0, j = 0; //i는 단, j는 뒤에 곱하는 수
	
	for(i = 1; i < 10; i++)//i가 1부터 9까지 반복
	{
      if(i%2 != 0)
		  continue;//만약 i/2의 나머지가 0이 아니라면, for문 제확인
		
		for(j = 1; j < 10; j++)//j가 1부터 9까지 반복
		{
			printf("%d x %d = %d\n", i, j, i*j);//출력
			if(i == j)
				break;//만약 i와 j가 같아지면 가까운 for문 탈출
		}
	}	
	return 0;
	
}