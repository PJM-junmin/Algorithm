#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int * ptr = &arr[0];
	
	printf("%d %d %d %d %d \n", * ptr, * (ptr + 1), * (ptr + 2), * (ptr + 3), * (ptr + 4));
	
	for(int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("%d ", *(ptr + i));
			
	}
	return 0;
}