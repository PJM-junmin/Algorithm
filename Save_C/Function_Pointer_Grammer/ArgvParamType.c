#include <stdio.h>

void ShowAllString(int argc, char * argv[])
{
	for(int i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
}

int main(void)
{
	char * str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};
	ShowAllString(3, str);
	
	return 0;
}

//argv는 char형 더블 포인터 변수이다. 따라서 argv에는 char**형 주소 값이 전달될 수 있다.
