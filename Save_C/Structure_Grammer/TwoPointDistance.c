#include <stdio.h>
#include <math.h>

struct point //구조체 point의 정의
{
	int xpos;
	int ypos;
};
	
int main(void)
{
	struct point pos1, pos2; //두개의 구조체 변수 선언
	double distance = 0;
	
	fputs("point1 pos: \n", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);
	
	fputs("point2 pos: \n", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);
	
	//두 점 사이의 거리 계산 공식
	distance = sqrt(pow(pos1.xpos - pos2.xpos, 2) + pow(pos1.ypos - pos2.ypos, 2));
	printf("두 점 사이의 거리는 %lf 입니다. \n", distance);
	
	return 0;
}
