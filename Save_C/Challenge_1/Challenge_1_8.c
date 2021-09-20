#include <stdio.h>

int squared(int k, int num);/* < 함수 원형 선언 >
							   하나, 컴파일러가 함수의 리턴값을 바르게 처리
							   둘, 사용자가 정확한 개수의 전달인자를 사용했는지 컴파일러가 검사
							   셋, 사용자가 정확한 데이터형의 전달인자를 사용했는지 컴파일러가 검사, 
							   만약 정확하지 않으면 정확한 데이터형으로 변환! */

int squared(int k, int num) //재귀 함수
{
	num = num *2; 			// 초기값이 2인 num에 2를 곱함 <1>
	k--;		  			// 2의 k승을 1씩 빼줌	<2>
	
	if(k == 0)				// k가 0이 되었을때, <4>
		return num;			// 2의 k승을 반환 -> main함수로 이동 <5>
							
	squared(k, num);  		// 다시 squared함수 호출 <3>
}


int main(void)
{
 	int k = 0, num = 1;
	printf("정수 입력: \n");
	scanf("%d", &k);
	
	if(k == 0)
		printf("2의 %d승은 1입니다", k);
	else
		printf("2의 %d승은 %d입니다 \n", k, squared(k,num));
	
	return 0;
	
}