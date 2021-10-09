#include <stdio.h>

int main(void)
{
	int ch;
	
	while(1)
	{
		ch = getchar();
		if(ch == EOF)
			break;
		putchar(ch);
	}
	return 0;	
	//Window에서는 CTRL + Z, Linux에서는 CTRL + D
}
