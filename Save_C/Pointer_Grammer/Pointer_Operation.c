#include <stdio.h>

int main(void)
{
	int num1 = 100, num2 = 100;
	int * pnum; //포인터 변수 pnum을 선언, 이는 int형 포인터 변수, int형 주소 값 저장 가능
	
	pnum =& num1;
	//포인터 pnum이 num1을 가리킴; 포인터 변수 pnum에 변수 num1의 주소 값을 저장, pnum이 num1을 가리킴
	(*pnum) += 30;
	// num1 += 30;과 같음
	pnum =& num2;
	//포인터 pnum이 num2를 가리킴, 저장된 값의 변경 가능
	(*pnum) -= 30;
	
	printf("num1: %d, num2: %d \n", num1, num2);
	return 0;
}