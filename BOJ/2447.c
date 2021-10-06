#include <stdio.h>
#include <string.h>

char map[3000][3000]; //3000 x 3000크기의 방 전역변수 선언
 
void solve(int y, int x, int num)
{
    if(num == 1)
    {
        map[y][x] = '*'; //숫자가 나누어 떨어지면 별찍
        return;
    }
     
    int div = num / 3; // 조건
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == 1 && j == 1)
                ; //넘김
            else
                solve(y + (i * div), x + (j * div), div); //3의 제곱을 넣음?
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
     
    memset(map, ' ', sizeof(map)); 
	//map전채를 1바이트 크기로 0으로 초기화 즉, 3000 x 3000 x 2를 초기화
	/*
	memset = 배열 초기화 함수(1바이트 단위로 초기화)
	보통 int형일 경우 0으로 초기화 1일시 -> 0x0012...등으로 초기화
	매개인자 = memset(ptr, value, num)
		ptr = 채우고자 하는 메모리의 시작 포인터(시작 주소)
		value = 메모리에 채우고자하는 값. int형이지만, 
				내부에서는 unsigned char(1 byte)로 변환되어서 저장된다.
		num = 채우고자 하는 바이트의 수. 즉, 채우고자 하는 메모리의 크기
     */
    solve(0, 0, n); //함수 실행 map[0][0]부터 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%c", map[i][j]); //배열 출력
        printf("\n");
    }
}
//[출처] [2447번] 별찍기 10 - BOJ|작성자 멍때리기 전문가