#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//부동소수점 sqrt 함수 때문에 틀림, 오차 생겨서..
int main(void)
{
	int T = 0;
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0, r1 = 0, r2 = 0;
	double distanse = 0, sub = 0, result = 0;
	
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		
		distanse = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		sub = r1 > r2 ? r1 - r2 : r2 - r1;
		
		if(distanse == 0 && r1 == r2)
			result = -1;
		
		else if(distanse < r1 + r2 && (sub < distanse))
			result = 2;
		
		else if(distanse == r1 + r2 || distanse == sub)
			result = 1;
		else
			result = 0;
		printf("%lf\n", result);
	}
	
	return 0;
}