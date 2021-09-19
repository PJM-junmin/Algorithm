#include <stdio.h>
double CelToFah(double Cel)
{
	return 1.8*Cel+32;
}

double FahToCel(double Fah)
{
	return (Fah-32)/1.8;
}

int main(void)
{
	int num = 0;
	printf("섭씨를 화씨로 바꿀려면 1, 화씨를 섭씨로 바꿀려면 2\n");
	printf(" >> ");
	scanf("%d", &num);
	
	if(num == 1)
	{
		double C = 0;
		printf("섭씨를 입력하시오\n");
		scanf("%lf", &C);
		printf("값은 %0.2lf.F", CelToFah(C));
	}
	
	if(num == 2)
	{
		double F = 0;
		printf("화씨를 입력하시오\n");
		scanf("%lf", &F);
		printf("값은 %0.2lf.C", FahToCel(F));
	}
	
	return 0;
}
