#include <stdio.h>

int main(void) 
{
	int Num = 0, sum = 0, add = 0, length = 0;
	char str[80];
	scanf("%d", &Num);
	
	for(int i = 0; i < Num; i++)
	{
		scanf("%s", str);
		
		while(str[length] != 0)
			length++; 
		
		for(int j = 0; j < length; j++) 
			//strlen 함수는 문자열의 길이를 구해주는 함수임 string.h 라이브러리에 있는거임
		{
			if(str[j] == 'O')
			{
				add++;
				sum += add;
			}
			else
				add = 0;
		}
		printf("%d", sum);
		sum = 0, add = 0, length = 0;
	}
	
	return 0;
}