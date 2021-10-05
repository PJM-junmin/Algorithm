#include <stdio.h>

int Factorial(int Num)
{
	if(Num == 0)
		return 1;
	
	return Num * Factorial(Num - 1);
}

int main(void)
{
    int Num = 0;
	scanf("%d", &Num);
	printf("%d", Factorial(Num));
	
    return 0;

}
