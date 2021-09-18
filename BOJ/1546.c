#include <stdio.h>

int main(void) 
{
	int Num = 0, max = 0;
	double avg = 0.0, sum = 0.0;
	
	printf("몇개 과목 넣을 꺼에요? \n");
	scanf("%d", &Num);
	
    double arr[Num];
	
	printf("과목 점수들: \n");
	
	for(int i = 0; i < Num; i++)
		scanf("%lf", &arr[i]);
	
	
	max = arr[0];
	for(int j = 0; j < Num; j++)
	{
		if(max < arr[j])
			max = arr[j];
		printf("%d, %lf\n", max, arr[j]);
	}
	printf("최대값은 %d\n", max);
	
	for(int k = 0; k < Num; k++)
		{
			arr[k] = (arr[k] / max)*100;
			printf("%lf\n", arr[k]);
		}
	
	for(int a = 0; a < Num; a++)
		sum += arr[a];
	
	avg = sum / Num;
	printf("%lf\n", avg);
	return 0;
}