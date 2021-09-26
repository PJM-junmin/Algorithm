#include <stdio.h>


int main(void)
{
	int num = 0, cnt = 0; //입력 숫자: n, 개수 up: cnt
	scanf("%d", &num); //n입력
	int arr[3]; //1000이하의 자리 수 'n'자리임
	for(int i = 1; i <= num; i++) //1부터 num까지 
	{
		if(i < 100) //1~2자리 숫자는 각 자리의 차가 무조건 같음 따라서 99개 전부다 한수
			cnt = i;
		else if(i == 1000) //1000까지 구해라해서 빠져나옴
			break;
		else
		{
			int k = 0, N = i; //k = 자리수, N은 지금 수
			while(N > 0) //N이 0보다 크면 실행
			{
				arr[k] = N % 10; //ex) 0번째 배열 안에 나머지가 들어가고
				N /= 10; // 10으로 나누면 그 자리 수가 나옴 
				k++; //배열 증가(지금 역순으로 저장 중)
			}
		}
		if(arr[0] - arr[1] == arr[1] - arr[2]) //각 자리 숫자의 차가 일정할때
			cnt ++; //개수 증가
	}
	
	printf("%d", cnt); //출력
	
	return 0;
}