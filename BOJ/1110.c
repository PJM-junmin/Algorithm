#include <stdio.h>

int main(void)
{
	int num=0;//입력숫자
	int ten=0;//십의 자리
	int one=0;//일의 자리
	int sum=0, sum1=0;//1차,2차 합
	int result=0;//결과값
	int cnt=0;//사이클
	
	scanf("%d", &num);//입력을 한다
	result=num;
	
	while(1)
	{
		ten=num/10;//십의 자리 구하기
	    one=num%10;//일의 자리 구하기
		sum=(ten+one)%10;//십의 자리와 일의 자리를 더한 후, 10으로 나눠 일의자리를 구한다.
		sum1=(one*10)+sum;//num의 1의자리에 10을 곱하고 위의 값을 더한다
		num=sum1;//sum1이 num이 된다
		cnt++;//카운트에 1추가
		
		 if(sum1==result)break;//만약 sum1이 결과값하고 같을 시, 반복문을 빠져나온다.
		
	}
	
	printf("%d\n", cnt);
	return 0;
}