#include <stdio.h>

int main(void)
{
 	char string[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
	int arrLen = sizeof(string) / sizeof(char);
	int i;
	
	for(i = 0; i < arrLen; i++)
		printf("%c", string[i]);
	printf("\n");
	return 0;
}