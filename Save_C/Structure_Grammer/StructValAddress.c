#include <stdio.h>
	
struct point
{
	int xpos; //첫번째 맴버
	int ypos;
};

struct person
{
	char name[20]; //첫번재 맴버
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct point pos = {10, 20};
	struct person man = {"이승기", "010-1212-0001", 21};
	
	printf("%p %p \n", &pos, &pos.xpos); //구조체의 주소값은 첫번째 맴버와 동일
	printf("%p %p \n", &man, man.name);  //구조체의 주소값은 첫번째 맴버와 동일
	
	return 0;
}
