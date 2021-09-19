#include <stdio.h>

void ShowAllData(const int * arr, int len)
{
	for(int i = 0; i < len; i++)
		printf("%d ", arr[i]);
}

/*
매개변수 선언에서 매개변수 arr을 대상으로 const선언을 한 이유
함수의 기능이 인자로 전달된 배열의 전체를 출력하는 것이다. 
따라서, 개발자가 실수로라도 배열 요소의 값을 바꾸는 일을 없애기 위해서이다.
즉, int 형 포인터 변수 arr이 각자의 주소 값을 가리키게끔 해야지, 바뀌면 포인터 배열의 의미가 없어진다.
(충돌 가능성도 있음)
*/