#include <stdio.h>

int main(void)
{
	int arr[3] = {11, 22, 33};
	int * ptr = arr; // int * ptr = &arr[0];과 같음
	printf("%d %d %d \n", * ptr, * (ptr + 1), * (ptr + 2));
	
	printf("%d ", * ptr);
	
	ptr++;
	printf("%d ", * ptr);
	
	ptr++;
	printf("%d ", * ptr);
	
	ptr--;
	printf("%d ", * ptr);
	
	ptr--;
	printf("%d \n", * ptr);
	
	return 0;
}