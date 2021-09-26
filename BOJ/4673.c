#include <stdio.h>

int Self_Num(int Num) //생성자 판별 함수
{
	int Sum = Num;
	while(Num != 0) //셀프넘버가 아닌걸 판별
	{
		Sum += Num % 10;
		Num /= 10;
	}
	return Sum;
}

int main(void)
{
	int arr[10001] = {0, };
	int Num = 0, result = 0;
	
	for(int i = 1; i < 10001; i++)
	{
		result = Self_Num(i);
		if(result < 10001)
			arr[result] = 1; // 생성자일시 0으로 arr에 저장
	}
	
	for(int j = 1; j < 10001; j++)
	{
		if(arr[j] == 0)
			printf("%d\n", j);
	}
	
	return 0;
}