#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, w = 0, h = 0, d = 0;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	
	if(w - x < x || h - y < y)
	{
		if(w - x > h - y)
		{
			while(h - y <= y)
			{
				d++;
				y++;
				if(h - y == 0)
				{
					printf("%d", d);
					break;
				}
			
			}
		}
		if(w - x < h - y)
		{
			while(w - x <= x)
			{
				d++;
				y++;
				if(w - x == 0)
				{
					printf("%d", d);
					break;
				}
			}
		}
		return 0;
	}
	
	if(w - x >= x || h - y >= y)
	{
		if(x > y)
		{
			printf("%d", y);
			return 0;
		}
		else
		{
			printf("%d", x);
			return 0;
		}
	}
	
	return 0;
}