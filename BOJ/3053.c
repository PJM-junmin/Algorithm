#include <stdio.h>
#define PI 3.14159265359

int main(void)
{
	int R = 0;
	
	scanf("%d", &R);
	
	printf("%lf\n", (double)PI * R * R);
	printf("%lf\n", (double)2 * R * R);
	
	return 0;
}