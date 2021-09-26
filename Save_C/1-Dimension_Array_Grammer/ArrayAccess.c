#include <stdio.h>

int main(void)
{
 	int arr[5] = {10, 20, 30, 40, 50};
	int sum = 0, i;
	
	for(i = 0; i < 5; i++)
		sum += arr[i];
	
	printf("배열요소에 저장된 값의 합: %d \n", sum);
	return 0;
}