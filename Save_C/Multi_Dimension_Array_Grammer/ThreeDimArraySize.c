#include <stdio.h>

//실행 main 함수
int main(void)
{
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("높이 2, 세로 2, 가로4 int형 배열: %ld \n", sizeof(arr1));
	printf("높이 5, 세로 5, 가로5 double형 배열: %ld \n", sizeof(arr2));
	return 0;
}