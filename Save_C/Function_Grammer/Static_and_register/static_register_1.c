#include <stdio.h>

int AddToTotal(int num)
{
	static int total = 0; /*전역변수를 지역변수처럼 바꾸는데 그 역할이 살짝 달라진다
	                        1번: 선언된 함수 내에서만! 접근 가능
							2번: 딱 1회 초기화 시키고 프로그램 종료 시까지 메모리 공간 할당(전역변수 특성)
	*/
    register int total1 = 0;/*이 변수를 cpu상에 있는 아주 약간의 메모리 공간에 넣어서 가동하면 
	                          그 공간에 있는 저장된 데이터를 대상으로 하는 연산은 매우 빠름
	*/
	total+=num;
	return total;
}

int main(void)
{
   int num = 0, i = 0;
	for(i = 0; i < 3; i++)
	{
		printf("입력%d: ", i + 1);
		scanf("%d", &num);
		printf("누적: %d", AddToTotal(num));
	}
	return 0;
}