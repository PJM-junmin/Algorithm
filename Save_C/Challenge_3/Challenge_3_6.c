#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int decide(int *user, int *com, int *result);

int main(void)
{
    int count = 1, i = 0;
    int userNum[3];
    int comNum[3] = {0, 0, 0};
    int result[3] = {0, 0, 0}; //result[0] = 스트라이크, result[1] = 볼, result[2] = 아웃
	
    srand((int)time(NULL) + i); //시간 변수

	//중복 숫자 안되게끔 설정
    for(i = 0; i < 3; i++)
	{
	    comNum[i] = rand() % 10; //컴퓨터 랜덤숫자 추출
		
        if( i == 1 && (comNum[0] == comNum[1]))
		{
			i--;
		} 
		else if( i == 2 && ((comNum[0] == comNum[2]) || (comNum[1] == comNum[2])))
            i--;
    }
	
	//유저 숫자 받음
    for(i = 0; i < 3; i++)
	{
        printf("컴퓨터의 선택 : %d ",comNum[i]);
    }
    printf("\n");

    printf("Start Game!\n");

    while (result[2] == 0) //아웃이 0일때
	{
	    printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &userNum[0], &userNum[1], &userNum[2]);

        if((0 <= userNum[0] && userNum[0] <= 9) &&
           (0 <= userNum[1] && userNum[1] <= 9) &&
           (0 <= userNum[2] && userNum[2] <= 9)) // 3개 숫자가 9이하의 자연수일때
		{
            decide(userNum, comNum, result); //결정 함수 호출
            printf("%d번째 도전 결과: %dstrike, %dball!!\n", count, result[0], result[1]);
            count++;
            result[0] = 0, result[1] = 0;

        } else
            printf("잘못된 입력입니다.\n"); //3개 숫자가 10이상의 자연수일때
    }
    printf("Game Over!\n");

    return 0;

}



int decide(int * user, int * com, int * result) //유저 포인터 컴퓨터 포인터 결과 포인터를 받음
{
    int strikeCount = 0, ballCount = 0;
    int i = 0, j = 0;
//유저 입력값과 컴퓨터 선택한 값이 일치한지 설정
    for(i = 0; i < 3; i++)
	{
        for(j = 0; j < 3; j++)
		{
            if(user[i] == com[j])
			{
                if(i == j)
				{
                    strikeCount++;
                } 
				else
				{
                    ballCount++;
                }
            }
        }
    }
    result[0] = strikeCount;
    result[1] = ballCount;
	
    if(strikeCount == 3)
        result[2] = 1; //While문 빠져나오는 조건

    return 0;

}
//출처: https://bodle.tistory.com/18 [Comfortable]