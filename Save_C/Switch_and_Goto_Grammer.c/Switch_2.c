#include <stdio.h>

int main(void)
{
	char sel;
	printf("M 오전, A 오후, E저녁 \n");
	printf("입력: ");
	scanf("%c", &sel);
	
	switch(sel)
	{
		case 'M':
		case 'm':
			printf("Morning \n");
			break;
		case 'A':
		case 'a':
			printf("Afternoon \n");
			break;
		case 'E':
		case 'e':
			printf("Evening \n");
			break;//없어도 됨
		
	}
	return 0;
}