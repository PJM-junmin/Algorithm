#include <stdio.h>

int main(void)
{
	int arr[10]; 
	int Front = 0, Final = 9, num = 0;
	
	
	for(int i = 0; i < 10; i++)
	{	
		scanf("%d", &num);
		if(num % 2 == 1)
			arr[Front++] = num;
			
		if(num % 2 == 0)
			arr[Final--] = num;
	}
	
	for(int j = 0; j < 10; j++)
	printf("%d ", arr[j]);
	
	return 0;
	
}