#include <stdio.h>

int main(void)
{
	int Num = 0, n = 0, Sum = 0;
	scanf("%d", &Num);
	
	char arr[Num];
	scanf("%s", arr);
	
	for(int i = 0; i < Num; i++)
		Sum += arr[i] - '0';
	
	printf("%d", Sum);
	
	return 0;
}
