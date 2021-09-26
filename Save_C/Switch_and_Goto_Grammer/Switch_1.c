#include <stdio.h>

int main(void)
{
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("1은 One이다 \n");
			break;
		case 2:
			printf("2은 Two이다 \n");
			break;
		case 3:
			printf("3은 Three이다 \n");
			break;
		case 4:
			printf("4은 Four이다 \n");
			break;
		case 5:
			printf("5은 Five이다 \n");
			break;
		default:
			printf("I don't know!");
	}
	
	return 0;
}