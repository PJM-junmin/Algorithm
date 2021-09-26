#include <stdio.h>

int main(void)
{
 	int max = 0, min = 0, sum = 0;
	int arr[5];
	
	printf("정수 5개를 입력하시오: \n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	max = min = sum = arr[0];
	for(int j = 0; j < 5; j++)
	{
		sum += arr[j]; // sum = sum + arr[j]임 입력받은수를 추가적으로 더해줌
		if(max < arr[j])
			max = arr[j];
		if(min > arr[j])
			min = arr[j];
	}	
	
	printf("입력된 정수 중 최대값: %d \n", max);
	printf("입력된 정수 중 최소값: %d \n", min);
	printf("입력된 정수의 총합: %d \n", sum);
	
	return 0;
}