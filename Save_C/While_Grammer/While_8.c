#include <stdio.h>

int main(void)
{
	int total=0;
	int input=0;
	int i=1;
	printf("정수 5개를 입력해주세요");
	
	while(i<=5)
	{
		scanf("%d", &input);
		
		while(input<1)
	    {
		printf("1이상의 정수를 입력해주세요.\n");
		scanf("%d", &input);
	    }
		total+=input;
		i++;
		input=0;
	}
	printf("정수 5개의 합: %d", total);
	return 0;
	
}