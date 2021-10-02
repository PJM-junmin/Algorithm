#include <stdio.h>

/*
다음 두 함수 안에 들어갈 매개변수를 선언하시오

void ComplexFuncOne(???, ???)
{
	return 0;
}

void ComplexFuncTwo(???, ???)
{
	return 0;
}
*/

int main(void)
{
	int * arr1[3];    // int * 형 변수로 이워진 1차원 배열
	int * arr2[3][5]; // int * 형 변수로 이뤄진, 가로길이가 5인 2차원 배열
	int ** arr3[5];   // int ** 형 변수로 이뤄진 1차원 배열
	int ***arr4[3][5];// int *** 형 변수로 이뤄진, 가로길이가 5인 2차원 배열
	
	//ComplexFuncOne(arr1, arr2);
	//ComplexFuncOne(arr3, arr4);
	
	return 0;
}

/*
void ComplexFuncOne(int ** ptr1, int * (* TDptr2)[5])
{
	return 0;
}

void ComplexFuncTwo(int *** ptr3, int *** (* TDptr4)[5])
{
	return 0;
}
*/