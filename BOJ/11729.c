#include <stdio.h>
#include <math.h>

int hanoi_top(int num, int A, int B, int C)
{
	if(num < 1)
		return 0;
	else if(num == 1)
		printf("%d %d\n", A, C);
	else
	{
		hanoi_top(num - 1, A, C, B); //C를 B로 옮김
		printf("%d %d\n", A, C); 
		hanoi_top(num - 1, B, A, C); // B를 A에 옮기고 B에 있던 C를 C로 옮김
	}
}

int main(void)
{
    int num = 0;
	int cnt = 0;
	scanf("%d", &num);
	
	cnt = pow(2, num) - 1;
	printf("%d\n", cnt);
	
	hanoi_top(num, 1, 2, 3);
	
    return 0;

}
