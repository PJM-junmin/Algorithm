#include <stdio.h>

int main(void)
{
 	int Cream = 500, shrimp = 700, Coke = 400;
	int i = 0,  j = 0, k = 0;
	int Money = 0;
	
	printf("가지고 있는 돈: \n");
	scanf("%d", &Money);
	
	if(Money <= 100000)
	{
	for(i = 1; i < 500; i++)
		for(j = 1; j < 500; j++)
			for(k = 1; k < 500; k++)
				if((i * Cream) + (j * shrimp) + (k * Coke) == Money)
					printf("크림빵: %d개 / 새우깡: %d개 / 콜라: %d개\n", i, j, k);
	printf("어떻게 구입하실겁니까? \n");
	}
	else
	printf("100000이하만 받습니다 \n");
		
	return 0;
}