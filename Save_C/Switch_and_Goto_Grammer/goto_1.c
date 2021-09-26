#include <stdio.h>

int main(void)
{
	int num;
	printf("자연수 입력: ");
	scanf("%d", &num);
	
	if(num == 1)
		goto ONE;
	else if(num == 2)
		goto TWO;
	else 
		goto OTHER;
	
	ONE:
	    printf("1을 입력했다 \n");
		goto END;
	TWO:
		printf("2를 입력했다 \n");
	 	goto END;
	OTHER:
		printf("3이상의 값을 입력했다! \n");
	
	END:
		return 0;
}