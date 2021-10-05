#include <stdio.h>

int Fibonacci_numbers(int Num)
{
	if(Num <= 1)
		return Num;
	
	return Fibonacci_numbers(Num - 1) + Fibonacci_numbers(Num - 2);
}

int main(void)
{
    int Num = 0;
	scanf("%d", &Num);
	printf("%d", Fibonacci_numbers(Num));
	
    return 0;

}
