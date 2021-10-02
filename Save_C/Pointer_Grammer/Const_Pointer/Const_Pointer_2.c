#include <stdio.h>

void ShowData(const int * ptr) //매개변수 const가 선언
{
	//int * rptr = ptr; //ptr이 가리키는 값 = Num이라는 메모리 공간 안의 값 10
	printf("%d \n", *ptr);
	* rptr = 20; //갑자기 20으로 바꾸면, const를 선언한거 자체가 의미없어짐
}


int main(void)
{
	int num = 10;
	int * ptr = &num;
	//ShowData(ptr);
	
	return 0;
}