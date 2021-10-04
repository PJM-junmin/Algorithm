#include <stdio.h>

int main(void)
{
	int Num = 0;
	scanf("%d", &Num);
	int count = 1; //들어갈 수
	int direction = 1;
	int row = 0, colume = -1;
	
	int arr[Num][Num];
	int num = Num;
	
	while(num)
	{
		//열 삽입
		for(int i = 0; i < num; i++)
		{
			colume += (1 * direction);	
    	    arr[row][colume] = count; //[0][0] == 0
			count++;
		}
		
		num -= 1;
		
		for(int j = 0; j < num; j++)
		{
    		row += (1 * direction);
            arr[row][colume] = count;
            count ++;
		}
		//방향 전환
		direction *= -1;
	}
	
	//출력
	for(int i = 0; i < Num; i++)
	{
		for(int j = 0; j < Num; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	return 0;
}

