#include <stdio.h>

int main(void)
{
	int h = 0, m = 0;
	scanf("%d %d", &h, &m);
	
	m = m - 45;
	if(m < 0)
	{
		m = 60 + m;
		h = h - 1;
	}
	if(m > 60)
	{
		m = m - 60;
		h = h + 1;
	}
	if(h < 0)
		h = h + 24;
	if(h > 23)
		h = h - 24;
	
	printf("%d %d", h, m);
	return 0;
		
}