#include <stdio.h>


int main(void)
{
	int * arr1[5];
	int * arr2[3][5];
	
	// ??? = arr1;
	// ??? = arr2;
	/* 
	'???'를 대신할 수 있는 포인터 변수는 무엇인가.
	*/
	
	int ** ptr1 = arr1;
	int * (*ptr2)[5] = arr2;
	
	/*
		< int * arr1[5] >
		1. arr1은 1차원 배열임
		2. arr1은 int형 포인터 변수로 이뤄진 배열임
		
		지금 위에서 arr1은 int형 싱글 포인터 변수를 가리킴
		따라서, 더블포인터인 int ** ptr1을 채우면 된다
		
		< int * arr2[3][5] >
		1. arr2는 2차원 배열임
		2. arr2는 int형 포인터 변수로 이뤄진 배열임
		3. arr2의 가로길이는 5임
		
		arr2가 가리키는 거는 int *형 변수이고, 가로길이는 [5]이다
		따라서, int * (*ptr2)[5]를 채우면 된다
	*/
	
	return 0;
}