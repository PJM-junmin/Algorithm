#include <stdio.h>
	
struct point
{
	int xpos; //x좌표
	int ypos; //y좌표
};

struct circle
{
	double radius; 
	struct point * center;
};

int main(void)
{
	struct point cen = {2, 7};
	double rad = 5.5;
	
	struct circle ring = {rad, &cen};
	printf("원의 반지름: %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center) -> xpos, (ring.center) -> ypos);
	
	return 0;
}
