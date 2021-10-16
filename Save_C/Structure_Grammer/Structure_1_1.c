#include <stdio.h>
#include <string.h>

struct employee //구조체 point의 정의
{
	char name[20];
	char RegistrationNum[17];
	int pay;
};
	
int main(void)
{
	struct employee man1;
	printf("고용인 이름 입력: ");
	scanf("%s", man1.name);
	printf("주민 번호 입력: ");
	scanf("%s", man1.RegistrationNum);
	printf("급여 입력: ");
	scanf("%d", &(man1.pay));
	
	printf("이름 %s\n주민번호: %s\n급여: %d\n",man1.name, man1.RegistrationNum, man1.pay);
	
	return 0;
}
