#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, V = 0;
	int Day = 0;
	
	scanf("%d %d %d", &a, &b, &V);
	
	Day = (V - b - 1) / (a - b) + 1;
//(길이에서 미끄러지는 것을 뺌 - 1(나누어 떨어지게 하기 위해) / 
// 하루갈 수 있는 거리 + 1(첫째날 부터이기 때문))
	
	
	printf("%d", Day);
	return 0;
}