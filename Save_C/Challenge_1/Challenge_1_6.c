#include <stdio.h>


int main(void)
{
 	int second = 0;
	
	int h = 0, m = 0, s = 0;
	
	printf("초(second) 입력: \n");
	scanf("%d", &second);
	
	h = second / 3600;
	m = (second - (3600 * h)) / 60;
	s = second % 60;
	
	printf("[h: %d, m: %d, s: %d]\n", h, m, s);
	
	return 0;
}