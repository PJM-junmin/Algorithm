#include <stdio.h>

int main(void)
{
	char perID[7]; //Enter키 까지 포함해서 6개의 배열을 넘어버림
	char name[10]; //따라서 입력할 기회가 안주어짐
	
	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	
	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);
	
	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);
	
	return 0;
}
