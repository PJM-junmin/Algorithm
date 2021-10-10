#include <stdio.h>

int main(void)
{
	char str[7]; //문자열은 Enter까지 1개의 메모리로 지정한다.
	
	for(int i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin); 
		printf("Read %d: %s \n", i + 1, str);
	}
	
	return 0;
}
