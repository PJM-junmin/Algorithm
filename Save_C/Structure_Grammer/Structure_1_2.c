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
	struct employee arr[3];
	
	for(int i = 0; i < 3; i++)
	{
		printf("고용인 이름 입력: ");
		scanf("%s", arr[i].name);
		printf("주민 번호 입력: ");
		scanf("%s", arr[i].RegistrationNum);
		printf("급여 입력: ");
		scanf("%d", &(arr[i].pay));
	printf("이름 %s\n주민번호: %s\n급여: %d\n",arr[i].name, arr[i].RegistrationNum, arr[i].pay);
	}
	
	return 0;
}
