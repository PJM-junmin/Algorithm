#include <stdio.h>

int main() {
    int a, b, c; //3개 정수
    int arr[10] = {0, }; //1차원 배열 초기화 방법
    scanf("%d %d %d", &a, &b, &c); //3개 숫자 받음
    int result = a*b*c; //결과값
    
    int num;
    while(result > 0) 
	{
        num = result % 10;
        arr[num]++; // index안에 있는 값에 + 1, num이 9면 9번째 방에 +1을 함
        result /= 10;
    }
    
    for(int i=0; i<10; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}