#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ThrowDice(char * arr[], int num, int * ptrwin, int * ptrdraw, int * ptrlose);

int main(void)
{
	int rock_sis_paper = 0;
	int win = 0, draw = 0, lose = 0, Something = 0;
	char *arr[4] = {"\0", "바위", "가위", "보"};
	
	printf("바위는 1이고 가위는 2이며 보는 3이다\n");
	while(Something == 0)
	{
		printf("정수입력: \n");
		scanf("%d", &rock_sis_paper);
		
		if(1 <= rock_sis_paper && rock_sis_paper <= 3)
		{
			ThrowDice(arr, rock_sis_paper, &win, &draw, &lose);	
			printf("나가실려면 0\n\n");
		}
		else if(rock_sis_paper == 0)
		{
			printf("\n게임의 결과 : %d승, %d무, %d패\n", win, draw, lose);
			Something = 1;
		}
		else
			printf("잘못 입력하였습니다\n");
	}	
	
	return 0;
}

int ThrowDice(char * arr[], int num, int * ptrwin, int * ptrdraw, int * ptrlose)
{
	int Computer_Choice = 0;
	
	srand((int)time(NULL));
    Computer_Choice = rand() % 3 + 1;

    printf("본인은 %s선택했고 컴퓨터는 %s선택했습니다\n", arr[num], arr[Computer_Choice]);

	if(num - Computer_Choice == 1|| num - Computer_Choice == - 2)
	{
        printf("당신이 이겼습니당\n\n");
		* ptrwin += 1;
    } 
	if(num - Computer_Choice == 0)
	{
        printf("비겼습니당\n\n");
		* ptrdraw += 1;
    }
	if(num - Computer_Choice == 2|| num - Computer_Choice == - 1)
	{
        printf("당신이 졌습니당\n\n");
		* ptrlose += 1;
    }
	return 0;
}

