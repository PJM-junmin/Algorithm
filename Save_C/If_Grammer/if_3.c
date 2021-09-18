#include <stdio.h>

int main(void)
{
	
	int Korean = 0, Math = 0, English = 0;
	int sum = 0;
	
	scanf("%d %d %d", &Korean, &Math, &English);
	sum = (Korean+Math+English)/3;
	
	if(90 <= sum && sum <= 100)
		printf("A");
	else if(80 <= sum && sum <= 90)
		printf("B");
	else if(70 <= sum && sum <= 80)
		printf("C");
	else if(60 <= sum && sum <= 70)
		printf("D");
	else
		printf("F");
	
	
	
	return 0;
	
}