#include <stdio.h>

typedef struct
{
	char name[20];
	char phoneNum[20];
	int age;
} Person; //자료형을 Person이라는 구조체

void ShowPersonInfo(Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

Person ReadPersonInfo(void)
{
	Person man;
	printf("name? : ");
	scanf("%s", man.name);
	printf("phone? : ");
	scanf("%s", man.phoneNum);
	printf("age? : ");
	scanf("%d", &man.age);
	
	return man;
}

int main(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
	
	return 0;
}
