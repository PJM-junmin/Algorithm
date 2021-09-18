#include <stdio.h>

int main(void) 
{
	int C = 0;//1번째 방
	int N = 0;//학생 수
	double avg = 0.0;
	scanf("%d", &C);
	int arr[C];
	for(int i = 0; i < C; i++)
	{
		int A[1000]; //학생 수가 1000이하
		int sum = 0; //점수의 합
		double avg = 0.0; // 점수의 평균
		scanf("%d", &N);
		
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &A[j]);
			sum += A[j]; 
		}
		
		avg = (double)sum / N; // int 형인 sum을 double형으로 자료형을 바꾸었다.
		
		int count = 0;
		for(int k = 0; k < N; k++)
		{
			if(avg < A[k])
				count++;
		}
		printf("%0.3lf%% \n", (double)count*100/N);
	}
	return 0;
}